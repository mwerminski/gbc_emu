//
// Created by root on 2/23/20.
//

#ifndef GBC_EMU_MEMORY_BLOCK_H
#define GBC_EMU_MEMORY_BLOCK_H

#include <memory>

struct Word{
    std::byte low_address;
    std::byte high_address;
};

class MemoryBlock{
protected:
    Word start_address;
    std::shared_ptr<Word> block;

    void write_data(const Word address, Word&& value);
    const Word read_data(const Word address);
    void erase();

};
#endif //GBC_EMU_MEMORY_BLOCK_H
