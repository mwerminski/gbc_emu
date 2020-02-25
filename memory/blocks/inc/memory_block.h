//
// Created by root on 2/23/20.
//

#ifndef GBC_EMU_MEMORY_BLOCK_H
#define GBC_EMU_MEMORY_BLOCK_H

#include <memory>
#include <vector>
#include "../../../cpu/inc/data_types.h"


class MemoryBlock{
protected:
    Word start_address;
    std::shared_ptr<std::vector<Word>> block;

    void write_data(const Word address, Word&& value);
    const Word read_data(const Word address);
    void erase();

};
#endif //GBC_EMU_MEMORY_BLOCK_H
