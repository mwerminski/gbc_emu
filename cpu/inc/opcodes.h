//
// Created by szylkret on 2/19/20.
//

#ifndef GBC_EMU_OPCODES_H
#define GBC_EMU_OPCODES_H

struct OneOperand{
    const std::string operand;
};

struct TwoOperands{
    const std::string first_operand;
    const std::string second_operand;
};

struct OpcodeBase {
    const bool prefix;
    const std::byte address;
    const std::string mnemonic;
    const unsigned short int cycles;
    const unsigned short int operands_num;

    struct flags {
        const std::byte dependent_flags_change;
        const std::byte affected_flags_states;
    };

};

template <class ...Operands>
struct Opcode : OpcodeBase, Operands...{
};
#endif //GBC_EMU_OPCODES_H
