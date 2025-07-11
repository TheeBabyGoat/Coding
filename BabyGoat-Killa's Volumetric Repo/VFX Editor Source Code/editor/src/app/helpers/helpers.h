#pragma once
#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <sstream>
#include <format>
#include <set>
#include <iomanip>
#include "common/types.h"
#include <mutex>
#include <windows.h>

#include "Cougar/FixedSizeAllocator.h"

std::string                 strip_str           (const std::string& str);
std::vector<std::string>    split_string        (const std::string& input, const std::string& delimiters, u16 expected_vec_size = 16);
bool						TextToClipboard		(const std::string& text);
void						Utf8ToWide			(wchar_t* destination, int destinationSize, const char* source);
void						WideToUtf8          (char* destination, int destinationSize, const wchar_t* source);

template <typename T>
void RemoveDuplicatesInVector(std::vector<T>& vec)
{
    std::set<T> values;
    vec.erase(std::remove_if(vec.begin(), vec.end(), [&](const T& value) { return !values.insert(value).second; }), vec.end());
}

namespace details
{
	template<u32 buff_sz>
	struct vfmt_helper
	{
		template<typename... T>
		static const char* _vfmt(std::format_string<T...> fmt, T&&... args)
		{
			thread_local static char tls_buff[buff_sz];
			std::memset(tls_buff, 0, std::size(tls_buff));
			std::format_to(tls_buff, fmt, std::forward<T>(args)...);
			tls_buff[buff_sz - 1] = '\0';
			return tls_buff;
		}
	};
}

template<typename... T>
const char* vfmt(std::format_string<T...> fmt, T&&... args) {
	return details::vfmt_helper<(0x100u)>::_vfmt(fmt, std::forward<T>(args)...);
}

template<typename... T>
const char* vfmt512(std::format_string<T...> fmt, T&&... args) {
	return details::vfmt_helper<(0x200u)>::_vfmt(fmt, std::forward<T>(args)...);
}

template<typename... T>
const char* vfmt1024(std::format_string<T...> fmt, T&&... args) {
	return details::vfmt_helper<(0x400u)>::_vfmt(fmt, std::forward<T>(args)...);
}

template<typename Type, size_t Size>
auto ConvertStrToArray(const char* str)
{
	std::array<Type, Size> arr{{}};
	std::basic_stringstream<char, std::char_traits<char>, hmcgr::StaticFirstFitAllocator<char, 10'000>> iss(str);
	Type value{};
	for (size_t i = 0; iss >> value && i < arr.size(); i++)
	{
		arr[i] = value;
	}
	return arr;
}

constexpr size_t constexpr_strlen(const char* str)
{
	size_t len = 0;
	while (*str++) 
		++len;
	return len;
}
