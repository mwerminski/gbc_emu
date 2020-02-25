//
// Created by root on 2/20/20.
//

#ifndef GBC_EMU_MAP_H
#define GBC_EMU_MAP_H
#include <memory>
#include "../blocks/inc/memory_block.h"
#include "../addresses/gb_mem_block_sizes.h"


class MemoryMap{
protected:
    std::array<MemoryBlock, GB_BLOCKS_NUM> blocks;

public:
    MemoryMap() = delete;
    MemoryMap(const MemoryMap& map) = delete;
    MemoryMap(MemoryMap&& map) = delete;
    MemoryMap& operator=(const MemoryMap reg) = delete;
    MemoryMap& operator=(MemoryMap&& reg) = delete;

    virtual Word &get_refrence(const Word&);
};

#endif //GBC_EMU_MAP_H
