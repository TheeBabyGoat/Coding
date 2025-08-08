
#include "config.hpp"
#include "logging.hpp"
#include <fstream>
#include <sstream>

bool Config::load(const std::string &path) {
    std::ifstream file(path);
    if (!file.is_open()) return false;
    std::string line;
    while (std::getline(file, line)) {
        if (line.find("VerboseLogging") != std::string::npos) {
            verbose = line.find("1") != std::string::npos;
        } else if (line.find("EnableOverlay") != std::string::npos) {
            overlay = line.find("1") != std::string::npos;
        }
    }
    log_set_verbose(verbose);
    return true;
}
