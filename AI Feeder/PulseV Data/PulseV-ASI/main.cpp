
#include "script.h"
#include "logging.hpp"
#include "config.hpp"
#include "data_reader.hpp"
#include "game_data_source.hpp"
#include "gtav_source.hpp"
#include <windows.h>

static bool running = false;

void ScriptMain()
{
    log_info("PulseV .asi started");
    Config cfg;
    if (!cfg.load("PulseV/config.ini")) {
        log_error("Missing config.ini. Aborting.");
        return;
    }

    running = true;
    DataSource *data_source = new GTAV::GTAVSource();
    DataReader::register_data_reader(GetModuleHandle(NULL), data_source);

    while (running) {
        DataReader::fast_update();
        scriptWait(0);
    }

    DataReader::unregister_data_reader(GetModuleHandle(NULL));
    delete data_source;
    log_info("PulseV .asi stopped");
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID)
{
    switch (reason) {
        case DLL_PROCESS_ATTACH:
            scriptRegister(hModule, ScriptMain);
            break;
        case DLL_PROCESS_DETACH:
            running = false;
            scriptUnregister(hModule);
            break;
    }
    return TRUE;
}
