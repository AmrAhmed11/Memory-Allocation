#include "compact.h"

void compact(memory &input_memory)
{
    if( input_memory.segments.size() == 0){
        return;
    }
    int hole_total_limit = 0;
    input_memory.segments[0].base = 0;

    for (int i = 1; i < input_memory.segments.size(); i++)
        input_memory.segments[i].base = input_memory.segments[i - 1].base +  input_memory.segments[i - 1].limit;

    for (int i = 0; i < input_memory.holes.size(); i++)
        hole_total_limit +=  input_memory.holes[i].limit;

    input_memory.holes.clear();

    hole compacted_hole;
    compacted_hole.id = 0;
    compacted_hole.base = input_memory.segments.back().base + input_memory.segments.back().limit;
    compacted_hole.limit = hole_total_limit;
    input_memory.holes.push_back(compacted_hole);
}
