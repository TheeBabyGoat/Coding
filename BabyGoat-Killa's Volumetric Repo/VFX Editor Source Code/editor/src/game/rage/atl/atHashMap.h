#pragma once
#include "crypto/joaat.h"
#include "rage/base/tlsContext.h"
#include "atArray.h"
#include "logger.h"


template<typename T>
struct atMapHashFn
{
	u32 operator()(const T&) = delete;
};

template<> inline u32 atMapHashFn<u8>::operator()(const u8& value) { return value; }
template<> inline u32 atMapHashFn<s8>::operator()(const s8& value) { return static_cast<u32>(value); }
template<> inline u32 atMapHashFn<u16>::operator()(const u16& value) { return value; }
template<> inline u32 atMapHashFn<s16>::operator()(const s16& value) { return static_cast<u32>(value); }
template<> inline u32 atMapHashFn<u32>::operator()(const u32& value) { return value; }
template<> inline u32 atMapHashFn<s32>::operator()(const s32& value) { return static_cast<u32>(value); }
template<> inline u32 atMapHashFn<u64>::operator()(const u64& value) { return static_cast<u32>(value % UINT_MAX); }
template<> inline u32 atMapHashFn<s64>::operator()(const s64& value) { return static_cast<u32>(value % UINT_MAX); }
template<> inline u32 atMapHashFn<const char*>::operator()(const ConstString& str) { return rage::joaat(str); }
template<> inline u32 atMapHashFn<std::string>::operator()(const std::string& str) { return rage::joaat(str.c_str()); }

template<typename TKey, typename TValue, typename THashFn = atMapHashFn<TKey>>
class atMap
{
private:

	struct Node
	{
		friend class atMap;
		const u32 hash;
		TValue value;
	private:
		Node* next = nullptr;
		Node(u32 _hash, const TValue& _value, Node* _next) : hash(_hash), value(_value), next(_next) {}
		Node(u32 _hash, TValue&& _value, Node* _next) : hash(_hash), value(std::move(_value)), next(_next) {}
		~Node() = default;
	};

	Node** m_Buckets = nullptr;
	u16 m_capacity = 0;
	u16 m_size = 0;
	u8  pad[3]{};
	bool m_AllowGrowing = true;

	void grow()
	{
		u16 new_capacity = NEXT_POWER_OF_TWO_32(m_capacity);

		size_t alloc_sz = new_capacity * sizeof(void*);
		Node** new_buckets = static_cast<Node**>(rage_malloc(alloc_sz));
		memset(new_buckets, 0, alloc_sz);

		if (!m_Buckets)
		{
			m_Buckets = new_buckets;
			m_capacity = new_capacity;
			return;
		}
		for (u16 i = 0; i < m_capacity; ++i)
		{
			Node* node = m_Buckets[i];
			while (node)
			{
				Node* next = node->next;
				u32 new_index = node->hash % new_capacity;
				node->next = new_buckets[new_index];
				new_buckets[new_index] = node;
				node = next;
			}
		}
		rage_free(m_Buckets);
		m_Buckets = new_buckets;
		m_capacity = new_capacity;
	}

	inline TValue* find(u32 _hash)
	{
		if (!empty())
		{
			u32 index = _hash % m_capacity;
			Node* bucket = m_Buckets[index];

			for (Node* node = bucket; node; node = node->next)
			{
				if (node->hash == _hash)
				{
					return &node->value;
				}
			}
		}
		return nullptr;
	}

public:

	atMap(u16 capacity = 32)
	{
		if (capacity < 32)
			capacity = 32;

		m_capacity = NEXT_POWER_OF_TWO_32(capacity);
		size_t alloc_sz = m_capacity * sizeof(void*);
		m_Buckets = static_cast<Node**>(rage_malloc(alloc_sz));
		memset(m_Buckets, 0, alloc_sz);
	}

	atMap(const atMap&) = delete; //TODO
	atMap& operator= (const atMap&) = delete;

	atMap(atMap&& other) noexcept
	{
		std::swap(m_Buckets, other.m_Buckets);
		std::swap(m_size, other.m_size);
		std::swap(m_capacity, other.m_capacity);
	}

	atMap& operator= (atMap&& other) noexcept
	{
		if (this == &other)
			return *this;

		std::swap(m_Buckets, other.m_Buckets);
		std::swap(m_size, other.m_size);
		std::swap(m_capacity, other.m_capacity);

		return *this;
	}

	u16		size() const					{ return m_size; }
	u16		capacity() const				{ return m_capacity; }
	bool	empty()	const					{ return m_size == 0; }
	TValue& at(const TKey& key)				{ return (*find(GetHash(key))); }
	bool	contains(const TKey& key) const	{ return find(GetHash(key)) != nullptr; }


	inline u32 GetHash(const TKey& value) const
	{
		THashFn fn{};
		return fn(value);
	}

	void insert(const TKey& key, const TValue& data)
	{
		u32 hash = GetHash(key);
		if (TValue* ptr = find(hash); ptr)
		{
			ptr->~TValue();
			new (ptr) TValue(data);
			return;
		}
		if (m_size >= m_capacity)
		{
			grow();
		}

		void* new_node_mem = rage_malloc(sizeof(Node));

		u32 bucket_index = hash % m_capacity;
		Node* new_node = new (new_node_mem) Node(hash, data, m_Buckets[bucket_index]);
		m_Buckets[bucket_index] = new_node;
		m_size++;
	}

	void clear()
	{
		if (m_Buckets)
		{
			for (u16 i = 0; i < m_capacity; ++i)
			{
				Node* node = m_Buckets[i];
				while (node)
				{
					Node* next = node->next;
					node->value.~TValue();
					rage_free(node);
					node = next;
				}
			}
			rage_free(m_Buckets);
		}
		m_Buckets = nullptr;
		m_capacity = 0;
		m_size = 0;
	}

	std::vector<std::pair<u32, TValue*>> toVec()
	{
		std::vector<std::pair<u32, TValue*>> vec;
		std::for_each(m_Buckets, m_Buckets + m_capacity, [&vec](Node* bucket)
			{
				for (Node* e = bucket; e; e = e->next)
				{
					vec.push_back({ e->hash, &e->value });
				}
			});
		return vec;
	}

	~atMap()
	{
		clear();
	}

	class iterator
	{
	private:
		Node** buckets;
		Node* current;
		u16 bucket_index;
		u16 bucket_count;

		void find_next_valid_bucket()
		{
			while (bucket_index < bucket_count && buckets[bucket_index] == nullptr)
			{
				++bucket_index;
			}
			if (bucket_index < bucket_count)
			{
				current = buckets[bucket_index];
			}
			else
			{
				current = nullptr;
			}
		}

	public:

		using iterator_category = std::forward_iterator_tag;
		using value_type = Node;
		using difference_type = std::ptrdiff_t;
		using pointer = const value_type*;
		using reference = const value_type&;

		iterator(Node** buckets, u16 bucket_count, u16 bucket_index = 0, Node* current = nullptr)
			: buckets(buckets)
			, current(current)
			, bucket_index(bucket_index)
			, bucket_count(bucket_count)
		{
			if (current == nullptr && bucket_index < bucket_count)
			{
				find_next_valid_bucket();
			}
		}

		iterator& operator++()
		{
			if (current)
			{
				if (current->next)
				{
					current = current->next;
				}
				else
				{
					++bucket_index;
					find_next_valid_bucket();
				}
			}
			return *this;
		}

		bool operator==(const iterator& other) const
		{
			return current == other.current;
		}

		bool operator!=(const iterator& other) const
		{
			return current != other.current;
		}

		Node& operator*() const
		{
			return (*current);
		}

		Node* operator->() const
		{
			return current;
		}
	};

	iterator begin()
	{
		return iterator(m_Buckets, m_capacity);
	}

	iterator end()
	{
		return iterator(m_Buckets, m_capacity, m_capacity, nullptr);
	}
};
