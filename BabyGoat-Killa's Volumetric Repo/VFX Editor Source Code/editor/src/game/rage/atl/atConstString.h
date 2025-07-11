#pragma once
#include <format>
#include <cstring>

#include "common/types.h"
#include "rage/atl/atArray.h"	//rage_malloc


class atConstString
{
	char* m_String = nullptr;
public:
	void vCopy(const char* str)
	{
		if (m_String)
		{
			rage_free(m_String);
			m_String = nullptr;
		}

		if (str == nullptr) {
			return;
		} else {
			size_t sz = strlen(str) + 1;
			m_String = (char*)rage_malloc(sz);
			memcpy(m_String, str, sz);
		}
	}

	atConstString(const char* str)
	{
		vCopy(str);
	}

	~atConstString()
	{
		if (m_String)
			rage_free(m_String);
	}

	atConstString& operator=(const char* str)
	{
		vCopy(str);
		return *this;
	}

	const char* c_str() const { return m_String; }
	operator const char*() const { return m_String; }
	operator char*() { return m_String; }
};


template<> 
struct std::formatter<atConstString>
{
	constexpr auto parse(std::format_parse_context& ctx) { 
		return ctx.begin(); 
	}

	auto format(const atConstString& str, std::format_context& ctx) const {
		return std::format_to(ctx.out(), "{}", str.c_str());
	}
};

