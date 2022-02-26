//
// Created by szylkret on 2/19/20.
//
#include "../../cartridge.h"

#ifndef GBC_EMU_ROM_ONLY_H
#define GBC_EMU_ROM_ONLY_H

class Rom: public Cartridge{
public:
    Rom();
    bool load_rom(const std::string &path);
};

#endif //GBC_EMU_ROM_ONLY_H
