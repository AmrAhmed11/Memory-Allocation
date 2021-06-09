#include "deallocate.h"

void deallocation(memory &input_memory, int deallocated_process){
    for (int i = 0;i<input_memory.segments.size();i++ ){
        if (input_memory.segments[i].process_number==deallocated_process){
            hole x;
            x.base=input_memory.segments[i].base;
            x.limit=input_memory.segments[i].limit;
            auto it = input_memory.segments.begin() + i;
            input_memory.segments.erase(it);
            input_memory.holes.push_back(x);
            i--;
        }
    }
    sort(input_memory.holes.begin(), input_memory.holes.end(), [](hole a, hole b) { return a.base < b.base; });
    for (int i = 0;i<input_memory.holes.size()-1;i++ ){
        if ((input_memory.holes[i].base+input_memory.holes[i].limit)==input_memory.holes[i+1].base){
            input_memory.holes[i].limit +=input_memory.holes[i+1].limit;
            auto it = input_memory.holes.begin() + (i+1);
            input_memory.holes.erase(it);
            i--;
        }
    }
    for (int i = 0;i<input_memory.holes.size();i++ ){
        input_memory.holes[i].id=i;
    }
}
