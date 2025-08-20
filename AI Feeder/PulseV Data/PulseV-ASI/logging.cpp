#include "logging.hpp"
#include <Windows.h>
#include <fstream>
#include <iostream>
#include <ctime>
#include <string>
#include <cstdarg>

static std::ofstream g_logFile;

static std::string current_time_string()
{
    time_t now = time(nullptr);
    struct tm t;
    localtime_s(&t, &now);

    char buf[64];
    strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", &t);
    return buf;
}

void log_initialize(const char* name)
{
    char exePath[MAX_PATH];
    GetModuleFileNameA(nullptr, exePath, MAX_PATH);

    // Get folder of the game executable
    std::string baseDir = exePath;
    size_t pos = baseDir.find_last_of("\\/");
    if (pos != std::string::npos)
        baseDir = baseDir.substr(0, pos);

    // Create PulseV folder if missing
    std::string logDir = baseDir + "\\PulseV";
    CreateDirectoryA(logDir.c_str(), nullptr);

    // Build log file path
    std::string logPath = logDir + "\\" + name + ".log";

    g_logFile.open(logPath, std::ios::out | std::ios::trunc);
    if (g_logFile.is_open())
    {
        g_logFile << "==== " << name << " Log Started ====\n";
        g_logFile.flush();
    }
}

static void log_write(const char* level, const char* fmt, va_list args)
{
    if (!g_logFile.is_open()) return;

    char buf[1024];
    vsnprintf_s(buf, sizeof(buf), _TRUNCATE, fmt, args);

    g_logFile << "[" << current_time_string() << "] [" << level << "] " << buf << "\n";
    g_logFile.flush();
}

void log_info(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_write("INFO", fmt, args);
    va_end(args);
}

void log_error(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_write("ERROR", fmt, args);
    va_end(args);
}

void log_debug(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    log_write("DEBUG", fmt, args);
    va_end(args);
}
