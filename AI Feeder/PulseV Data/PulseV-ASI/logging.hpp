#pragma once
#include <cstdarg>

// Initialize logging (creates log file)
void log_initialize(const char* name);

// Logging functions (printf-style)
void log_info(const char* fmt, ...);
void log_error(const char* fmt, ...);
void log_debug(const char* fmt, ...);
