//
// Created by szylkret on 2/19/20.
//

#ifndef GBC_EMU_REGISTER_H
#define GBC_EMU_REGISTER_H

#include <iostream>

class Register{
    const std::string name;
    std::byte low_bits;
    std::byte high_bits;

public:
    Register() = delete;
    Register(const Register& reg) = delete;
    Register(Register&& reg);
    Register(std::string name);
    Register& operator=(const Register reg) = delete;
    Register& operator=(Register&& reg);
    ~Register();

};
#endif //GBC_EMU_REGISTER_H
