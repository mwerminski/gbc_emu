//
// Created by Mariusz on 21.02.2022.
//
#include <string>
#include <stdexcept>
#include "../inc/rom_only.h"
#include <iostream>
#include <fstream>
#include <memory>

Rom::Rom() = default;

bool Rom::load_rom(std::string const& path){
    std::ifstream ifs(path, std::ios::binary | std::ios::ate);

    if(!ifs)
        throw std::runtime_error(path + ": " + std::strerror(errno));

    auto end = ifs.tellg();
    ifs.seekg(0, std::ios::beg);

    auto size = std::size_t(end - ifs.tellg());
    if(size == 0) return false;

    buffer = std::make_shared<std::vector<std::byte>>(size);
    if(!ifs.read((char*)buffer->data(), buffer->size()))
        throw std::runtime_error(path + ": " + std::strerror(errno));

    return true;
};
