//
// Created by szylkret on 21.02.2022.
//
#include "cartridge.h"

std::shared_ptr<std::vector<std::byte>> Cartridge::get_buffer() {
    return buffer;
}

void Cartridge::clean_buffer() {
    buffer = nullptr;
}
