#include "memory.h"
#include "process.h"
void allocation(memory &input_memory, std::vector<process> &input_processes, char method)
{
    //1 bestfit
    //2 firstfit
    //3 worstfit
    int no_of_segments=0;
    memory main_memory = input_memory;
    bool allocated=false;
    for (int i = 0; i < input_processes.size(); i++)
    {   
        for (int k = 0; k < input_processes[i].segments.size(); k++)
        {  
            if (method==1)
                sort(main_memory.holes.begin(), main_memory.holes.end(), [](hole a, hole b) { return a.limit < b.limit; });
            if (method==3)
                sort(main_memory.holes.begin(), main_memory.holes.end(), [](hole a, hole b) { return a.limit > b.limit; });
            for (int j = 0; j < main_memory.holes.size(); j++)
            {
                if (input_processes[i].segments[k].limit <= main_memory.holes[j].limit)
                {
                    input_processes[i].segments[k].base = main_memory.holes[j].base;
                    main_memory.segments.push_back(input_processes[i].segments[k]);
                    if ((input_processes[i].segments[k].limit + input_processes[i].segments[k].base) == (main_memory.holes[j].limit + main_memory.holes[j].base))
                    {
                        auto it = main_memory.holes.begin() + j;
                        main_memory.holes.erase(it);
                    }
                    else
                    {
                        main_memory.holes[j].base = input_processes[i].segments[k].limit + input_processes[i].segments[k].base;
                        main_memory.holes[j].limit -= input_processes[i].segments[k].limit;
                    }
                    no_of_segments += 1;
                    break;
                }
            }
        }
        if (no_of_segments==input_processes[i].segments.size()){
            input_memory=main_memory;
        }
        else{
            main_memory=input_memory;
        }
        no_of_segments = 0;
    }  
}