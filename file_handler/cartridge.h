//
// Created by root on 2/19/20.
//

#ifndef GBC_EMU_CARTRIDGE_H
#define GBC_EMU_CARTRIDGE_H

#include <string>
#include <vector>
#include <memory>

#define CARTRIDGE_MAX_SIZE 0x200000

class Cartridge{
    std::unique_ptr<std::vector<std::byte>> buffer;

    bool load_rom(std::string const& path);
    void clean_buffer();
    std::unique_ptr<std::vector<std::byte>> get_buffer();

};

#endif //GBC_EMU_CARTRIDGE_H
