//
// Created by szylkret on 2/19/20.
//

#ifndef GBC_EMU_REGISTER_H
#define GBC_EMU_REGISTER_H

#include <iostream>
#include "data_types.h"

class Register : public Word {
    const std::string name;

public:
    Register() = delete;
    Register(const Register& reg) = delete;
    Register(Register&& reg);
    Register(std::string name);
    Register& operator=(const Register reg) = delete;
    Register& operator=(Register&& reg);
    ~Register() = default;

};
#endif //GBC_EMU_REGISTER_H
