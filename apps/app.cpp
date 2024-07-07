#include <iostream>
#include <spdlog/spdlog.h>
#include "../file_handler/cartridge.h"
#include "../cpu/inc/CPU.h"

int main() {
    spdlog::info("Hello, world!");
    auto cartridge = Cartridge();
    cartridge.load_rom("test_rom.gb");
    auto buffer = cartridge.get_buffer();
//    for(auto &b : *buffer){
//        spdlog::info("byte: {0}", b);
//    }
    auto cpu = CPU();
    return 0;
}
