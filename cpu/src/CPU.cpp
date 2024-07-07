//
// Created by Mariusz Werminski on 07.07.2024.
//



#include <nlohmann/json.hpp>
#include <fstream>
#include <spdlog/spdlog.h>

#include "../inc/CPU.h"

bool CPU::initialize_opcodes() {
    const auto file_path = "opcodes.json";
    std::ifstream opcodes_file(file_path);

    if (!opcodes_file.good()) {
        spdlog::critical("Unable to open file {0}", file_path);
        return false;
    }

    nlohmann::json data = nlohmann::json::parse(opcodes_file);
    return true;
}

bool CPU::initialize_registers() {
    const auto register_num = 4;
    std::array<std::string, register_num> available_registers = { "AF", "BC", "DE", "HL"};
    for (auto &reg_name : available_registers) {
        registers_.insert({reg_name, Register(reg_name)});
    }
}

CPU::CPU(){
    initialize_opcodes();
    initialize_registers();
}