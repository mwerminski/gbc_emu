//
// Created by szylkret on 2/25/20.
//

#ifndef GBC_EMU_CPU_H
#define GBC_EMU_CPU_H

#include <bitset>
#include <map>
#include <functional>
#include "register.h"
#include "data_types.h"
#include "../../memory/blocks/inc/memory_block.h"

class CPU{
    std::map<std::string_view, Register> registers_;
    std::map<std::byte, std::function<std::byte()>> opcodes_;
    Word program_counter_;
    Word stack_pointer_;
    std::unique_ptr<MemoryBlock> memory_;

    std::byte execute_opcode(std::string_view);
    bool initialize_opcodes();
    bool initialize_registers();

    class ALU {
        static void ADD(Register& lhs, const Register& rhs);
        static void ADC(Register& lhs, const Register& rhs, const Register& flags);
        static void SUB(Register& lhs, const Register& rhs);
        static void SBC(Register& lhs, const Register& rhs);
        static void AND(Register& lhs, const Register& rhs);
        static void OR(Register& lhs, const Register& rhs);
        static void XOR(Register& lhs, const Register& rhs);
        static void CP(const Register& lhs, const Register& rhs);
        static void INC(Register& lhs);
        static void DEC(Register& lhs);
    };

public:
    CPU();
};



#endif //GBC_EMU_CPU_H
