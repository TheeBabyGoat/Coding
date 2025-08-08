
#include "logging.hpp"
#include <fstream>
#include <filesystem>

static std::string log_path = "PulseV/log.txt";
static bool verbose_enabled = true;

void log_set_verbose(bool enabled) {
    verbose_enabled = enabled;
}

void log_write(const char *level, const std::string &msg) {
    std::ofstream file(log_path, std::ios::app);
    file << "[" << level << "] " << msg << std::endl;
}

void log_info(const std::string &msg) { log_write("INFO", msg); }
void log_error(const std::string &msg) { log_write("ERROR", msg); }
void log_debug(const std::string &msg) { if (verbose_enabled) log_write("DEBUG", msg); }
