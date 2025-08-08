
#pragma once
#include <string>

void log_set_verbose(bool enabled);
void log_info(const std::string &msg);
void log_error(const std::string &msg);
void log_debug(const std::string &msg);
