
#pragma once
#include <string>

struct Config {
    bool verbose = false;
    bool overlay = false;
    bool load(const std::string &path);
};
