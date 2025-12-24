#pragma once
#include "logging.h"
// pulsev_log_once.h
// Thread-safe "log once per key" helper.

#include <mutex>
#include <string>
#include <string_view>
#include <unordered_set>
#include <utility>

namespace pulsev
{
    inline bool seen_once(std::string_view key)
    {
        static std::mutex m;
        static std::unordered_set<std::string> seen;
        std::lock_guard<std::mutex> lock(m);
        // insert returns pair<iter, inserted>; we want true only for the first time
        return seen.insert(std::string(key)).second;
    }
}

// Macro to log once for a given key (expects a logger named logx with .info(...)).
// If you don't have logx, ignore this macro; the header still provides seen_once and log_once_key.
#ifndef PULSV_LOG_ONCE
namespace pulsev {
    inline void log_once(const char* key, const char* fmt)
    {
        if (seen_once(key)) logx::info(fmt);
    }
    template<typename... Args>
    inline void log_once(const char* key, const char* fmt, Args&&... args)
    {
        if (seen_once(key)) logx::info(fmt, std::forward<Args>(args)...);
    }
}
#define PULSV_LOG_ONCE ::pulsev::log_once
#endif

// Back-compat helper: returns true only once per unique key.
inline bool log_once_key(std::string_view key) { return pulsev::seen_once(key); }
