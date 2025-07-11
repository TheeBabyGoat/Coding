#pragma once
#include <iostream>
#include <cstdint>
#include <initializer_list>
#include <vector>
#include <type_traits>

#include "common/types.h"
#include "helpers/bits.h"
#include "rage/base/tlsContext.h"
#include "logger.h"
#include "helpers/align.h"


#define RageMallocUsage true
namespace rage
{
	inline void* _RageMalloc(size_t size) { return rage::tlsContext::get()->m_allocator->Allocate(size, 16, 0); }
	inline void _RageFree(void* block) { rage::tlsContext::get()->m_allocator->Free(block); }
}
#if RageMallocUsage
#define rage_malloc(size) rage::_RageMalloc(size)
#define rage_free(block) rage::_RageFree(block)
#else
#define rage_malloc(size) malloc(size)
#define rage_free(block) free(block)
#endif
#undef max
#undef min

template<class T>
struct RageAllocator	// Compatible with stl containers
{
	using value_type = T;
	using pointer = T*;

	using propagate_on_container_copy_assignment = std::false_type;
	using propagate_on_container_move_assignment = std::false_type;
	using propagate_on_container_swap = std::false_type;
	using is_always_equal = std::true_type;

	RageAllocator() = default;

	RageAllocator(RageAllocator const&) = default;
	RageAllocator& operator=(RageAllocator const&) = default;

	template<class U>
	RageAllocator(RageAllocator<U> const&) noexcept {}

	template<class U>
	RageAllocator& operator=(RageAllocator<U> const&) noexcept { return *this; }

	pointer allocate(std::size_t n)
	{
		if (std::size_t(-1) / sizeof(T) < n)
			throw std::bad_array_new_length();

		if (!n)
			return nullptr;
		
		if ( auto* r = static_cast<pointer>(rage::tlsContext::get()->m_allocator
			->Allocate(std::_Get_size_of_n<sizeof(T)>(n), std::max(alignof(T), static_cast<size_t>(16)), 0)) )
		{
			return r;
		}
		throw std::bad_alloc();
	}

	void deallocate(pointer p, std::size_t n) 
	{
		rage::sysMemAllocator* _allocator = rage::tlsContext::get()->m_allocator; 
		if (_allocator)
		{ 
			_allocator->Free(p);
		}
	}

	template<class U>
	bool operator==(RageAllocator<U> const& rhs) const {
		return true;
	}

	template<class U>
	bool operator!=(RageAllocator<U> const& rhs) const {
		return false;
	}
};


template<class TValue, class TSize = u16, class Alloc = RageAllocator<TValue>>
class atArray 
{
	static_assert(std::is_unsigned_v<TSize>, "Size type must be unsigned");
	static_assert(std::is_same_v<TValue, typename Alloc::value_type>, "Allocator type must match value type");

	TValue* m_offset = nullptr;
	TSize m_size = 0;
	TSize m_capacity = 0;

	[[msvc::no_unique_address]] Alloc m_alloc;
	using AllocTraits = std::allocator_traits<Alloc>;
	
	void VerifyBufferCanFitOrGrow(size_t requested_sz)
	{
		if (requested_sz >= m_capacity) 
		{
			size_t sz = NEXT_POWER_OF_TWO_32(requested_sz);
			
			if (sz < 16)
				sz = 16;

			reserve(sz);
		}
	}

public:

	atArray() = default;

	atArray(TSize count)
	{
		resize(count);
	}

	atArray(TSize count, const TValue& v)
	{
		VerifyBufferCanFitOrGrow(count);
		std::uninitialized_fill(m_offset, m_offset + count, v);
		m_size = count;
	}

	template <class Iter, std::enable_if_t<std::_Is_iterator_v<Iter>, int> = 0>
	atArray(Iter start, Iter end)
	{
		size_t sz = std::distance(start, end);
		if (sz == 0)
			return;

		VerifyBufferCanFitOrGrow(sz);
		std::uninitialized_copy(start, end, m_offset);
		m_size = sz;
	}

	atArray(std::vector<TValue>& vec) : atArray(vec.begin(), vec.end()) {}

	atArray(const atArray& other) : atArray(other.begin(), other.end()) {}
	
	atArray(std::initializer_list<TValue> il) : atArray(il.begin(), il.end()) {}

	atArray& operator=(const atArray& other)
	{
		if (this == &other)
			return *this;

		clear();
		VerifyBufferCanFitOrGrow(other.size());
		std::uninitialized_copy(other.begin(), other.end(), begin());
		m_size = other.size();

		return *this;
	}

	atArray(atArray&& other) noexcept
	{
		std::swap(m_offset, other.m_offset);
		std::swap(m_size, other.m_size);
		std::swap(m_capacity, other.m_capacity);
	}

	atArray& operator=(atArray&& other) noexcept
	{
		if (this == &other)
			return *this;

		std::swap(m_offset, other.m_offset);
		std::swap(m_size, other.m_size);
		std::swap(m_capacity, other.m_capacity);

		return *this;
	}
	
	using value_type		= TValue;
	using size_type			= TSize;
	using difference_type	= std::ptrdiff_t;
	using reference			= TValue&;
	using const_reference	= const TValue&;
	using pointer			= TValue*;
	using const_pointer		= const TValue*;
	using iterator			= TValue*;
	using const_iterator	= const TValue*;
	using allocator_type	= Alloc;

	TValue*				begin()					    { return m_offset; }
	TValue*				end()                       { return m_offset + m_size; }
	const TValue*       begin() const               { return m_offset; }
	const TValue*       end() const	                { return m_offset + m_size; }
	TValue&				front()                     { return *(begin); }
	TValue&				back()                      { return *(end() - 1); }
	TValue*				data()                      { return m_offset; }
	u16					capacity() const            { return m_capacity; }
	u16					size() const	            { return m_size; }
	bool				empty() const               { return (m_size == 0); }
	bool				contains(const TValue& v) const { return index_of(v).has_value(); }
	size_t				max_size() const            { return std::numeric_limits<TSize>::max();}

	TValue&				at(u16 offset)              { return (offset < m_size) ? m_offset[offset] : m_offset[0]; }
	TValue&				operator[](u16 idx)	        { return at(idx); }
	const TValue&		operator[](u16 idx) const   { return at(idx); }

	void reserve(size_t new_cap)
	{
		if (new_cap <= m_capacity)
			return;

		if (new_cap > max_size())
		{
			if (m_capacity < max_size()) {
				new_cap = max_size();
			} else {
				LogInfo("atArray ::reserve({}) -> Capacity limit was reached; max_size : {}", new_cap, u64(max_size()));
				throw "";
			}
		}

		//TValue* newOffset = reinterpret_cast<TValue*>(rage_malloc(std::_Get_size_of_n<sizeof(TValue)>(new_cap)));
		TValue* newOffset = AllocTraits::allocate(m_alloc, new_cap);

		if (!m_offset)
		{
			m_offset = newOffset;
			m_capacity = new_cap;
			return;
		}
		if constexpr (std::is_nothrow_move_constructible_v<TValue> || !std::is_copy_constructible_v<TValue>) {
			std::uninitialized_move(begin(), end(), newOffset);
		} else {
			std::uninitialized_copy(begin(), end(), newOffset);
		}
		std::destroy(begin(), end());
		AllocTraits::deallocate(m_alloc, m_offset, m_capacity);
		//rage_free(m_offset);
		m_offset = newOffset;
		m_capacity = new_cap;
	}

	template <typename... Args>
	TValue& emplace_back(Args&&... args)
	{
		VerifyBufferCanFitOrGrow(m_size);
		new (&m_offset[m_size]) TValue(std::forward<Args>(args)...);
		m_size++;
		return back();
	}

	TValue& push_back(const TValue& value)
	{
		return emplace_back(value);
	}

	TValue& push_back(TValue&& value)
	{
		return emplace_back(std::move(value));
	}

	void pop_back()
	{
		if (!empty()) {
			m_size -= 1;
			std::destroy_at(end());
		}
	}

	void resize(TSize new_sz)
	{
		if (m_size == new_sz)
			return;

		if (new_sz < m_size)
		{
			std::destroy(m_offset + new_sz, end());
		}
		else
		{
			VerifyBufferCanFitOrGrow(new_sz);
			std::uninitialized_default_construct(m_offset + m_size, m_offset + new_sz);
		}
		m_size = new_sz;
	}

	void insert(size_t _where, const TValue& value)
	{
		if (_where > m_size)
			throw std::out_of_range(std::format("AtArray ::insert()\nIdx : {} is out of range", _where));

		VerifyBufferCanFitOrGrow(m_size + 1);
		if (_where == m_size)
		{
			emplace_back(value);
			return;
		}
		
		auto* pos = m_offset + _where;
		auto* _end = end();

		std::construct_at(_end);
		if constexpr (std::is_nothrow_move_constructible_v<TValue>) {
			std::move_backward(pos, _end, _end + 1);
		} else {
			std::copy_backward(pos, _end, _end + 1);
		}
		(*pos) = value;
		m_size++;
	}

	template <class Iter, std::enable_if_t<std::_Is_iterator_v<Iter>, int> = 0>
	void insert(size_t _where, Iter first, Iter last)
	{
		if (_where > m_size)
			throw std::out_of_range(std::format("AtArray ::insert()\nIdx : {} is out of range", _where));

		size_t count = std::distance(first, last);
		if (count == 0)
			return;

		VerifyBufferCanFitOrGrow(m_size + count);

		if (_where == m_size)
		{
			for (auto it = first; it != last; ++it) 
			{
				push_back(*it);
			}
			return;
		}

		auto* pos = m_offset + _where;
		auto* curr_end = end();
		auto* new_end = end() + count;
	
		std::uninitialized_default_construct(curr_end, new_end);
		if constexpr (std::is_nothrow_move_constructible_v<TValue>) {
			std::move_backward(pos, curr_end, new_end);
		} else {
			std::copy_backward(pos, curr_end, new_end);
		}
		std::copy(first, last, pos);
		m_size += count;
	}

	void insert(size_t _where, std::initializer_list<TValue> il)
	{
		insert(_where, il.begin(), il.end());
	}

	void remove_at(size_t idx)
	{
		if (idx >= m_size)
			return;
		
		auto* _where = m_offset + idx;
		
		if (_where == &back())
		{
			pop_back();
			return;
		}

		std::destroy_at(_where);
		if constexpr (std::is_nothrow_move_assignable_v<TValue>) {
			std::move(_where + 1, end(), _where);
		} else {
			std::copy(_where + 1, end(), _where);
		}
	
		m_size -= 1;
		std::destroy_at(end());	// object here is still valid
	}
	
	void erase_v(const TValue& v)
	{
		if (empty())
			return;

		for (size_t i = m_size - 1; i >= 0; --i) {
			if (v == m_offset[i]) {
				remove_at(i);
			}
		}
	}

	std::optional<s32> index_of(const TValue& v) const
	{
		for (size_t i = 0; i < m_size; i++)
		{
			if (m_offset[i] == v)
				return i;
		}
		return std::nullopt;
	}

	void clear()
	{
		if (empty())
			return;

		std::destroy(begin(), end());
		m_size = 0;
	}

	~atArray()
	{
		clear();
		if (m_offset)
		{
			AllocTraits::deallocate(m_alloc, m_offset, m_capacity);
			//rage_free(m_offset);
			m_offset = nullptr;
			m_capacity = 0;
		}
	}
};
