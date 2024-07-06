//
// Created by szylkret on 21.02.2022.
//
#include "cartridge.h"
#include <fstream>
#include <iterator>
#include <memory>
#include <spdlog/spdlog.h>

std::shared_ptr<std::vector<std::byte>> Cartridge::get_buffer() {
    spdlog::debug("Cartridge::get_buffer()");
    return buffer;
}

bool Cartridge::load_rom(std::string const& path) {
    spdlog::debug("Cartridge::load_rom()");

    std::ifstream input(path, std::ios::binary);
    if (!input.good()) {
        spdlog::critical("Unable to open file {0}", path);
        return false;
    }

    input.seekg(0, std::ios::end);
    auto const file_size = input.tellg();
    input.seekg(0, std::ios::beg);

    buffer = std::make_shared<std::vector<std::byte>>(file_size);
    input.read(reinterpret_cast<char*>(buffer->data()), file_size);
    input.close();

    return true;
}

void Cartridge::clean_buffer() {
    spdlog::debug("Cartridge::clean_buffer()");
    buffer = nullptr;
}
