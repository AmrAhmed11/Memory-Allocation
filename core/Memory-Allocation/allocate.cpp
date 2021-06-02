#include "memory.h"

void allocation(memory &input_memory, std::vector<segment> &input_segments, char method)
{
    //1 bestfit
    //2 firstfit
    //3 worstfit
    memory main_memory = input_memory;
    bool allocated=false;
    if (method == 1 || method == 2 || method ==  3)
    {
        for (int i = 0; i < input_segments.size(); i++)
        {
            if (method==1)
                sort(main_memory.holes.begin(), main_memory.holes.end(), [](hole a, hole b) { return a.limit < b.limit; });
            if (method==3)
                sort(main_memory.holes.begin(), main_memory.holes.end(), [](hole a, hole b) { return a.limit > b.limit; });
            for (int j = 0; j < main_memory.holes.size(); j++)
            {
                if (input_segments[i].limit <= main_memory.holes[j].limit)
                {
                    input_segments[i].base = main_memory.holes[j].base;
                    main_memory.segments.push_back(input_segments[i]);
                    if ((input_segments[i].limit + input_segments[i].base) == (main_memory.holes[j].limit + main_memory.holes[j].base))
                    {
                        auto it = main_memory.holes.begin() + j;
                        main_memory.holes.erase(it);
                    }
                    else
                    {
                        main_memory.holes[j].base = input_segments[i].limit + input_segments[i].base;
                        main_memory.holes[j].limit -= input_segments[i].limit;
                    }
                    allocated=true;
                    break;
                }
                if (allocated==false){
                    
                }
            }
        }
    }
    
}