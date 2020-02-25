//
// Created by root on 2/19/20.
//

#ifndef GBC_EMU_DATA_TYPES_H
#define GBC_EMU_DATA_TYPES_H

#include <memory>

struct Word{
    std::byte low_bits;
    std::byte high_bits;

    Word& operator+(const Word& rhs);
    Word& operator-(const Word& rhs);
};

#endif //GBC_EMU_DATA_TYPES_H
