#include "input.h"
using namespace std;

//vector<process> new_processes;
//char method;
//input(main_memory, new_processes, method);
//allocation(main_memory, new_processes, method);


void input(memory &main_memory) {

    sort(main_memory.holes.begin(), main_memory.holes.end(), [](hole a, hole b) { return a.base < b.base; });

    //creating old processes
    QVector<process> old_processes;

    if (main_memory.holes.size() == 0) {
        process a;
        a.id = -1;   
        segment segment;
        segment.base = 0;
        segment.limit = main_memory.size;
        segment.process_number = -1;
        segment.name = "OldProcess1";
        a.segments.push_back(segment);
        old_processes.push_back(a);
        main_memory.segments.push_back(segment);

    }
    else {
        process a;
        a.id = -1;
        int old_process_id = -1;
        if (main_memory.holes[0].base != 0) {
            segment segment;
            segment.base = 0;
            segment.limit = main_memory.holes[0].base;
            segment.process_number = a.id;
            segment.name = "OldProcess" + QString::number(-1 * a.id);
            a.segments.push_back(segment);
            old_processes.push_back(a);
            main_memory.segments.push_back(segment);
            old_process_id--;
        }

        for (int i = 0; i < main_memory.holes.size() - 1; i++) {
            if (main_memory.holes[i].base + main_memory.holes[i].limit != main_memory.holes[i + 1].base) {
                process p;
                p.id = old_process_id;
                segment segment;
                segment.base = main_memory.holes[i].base + main_memory.holes[i].limit;
                segment.limit = main_memory.holes[i + 1].base - segment.base;
                segment.process_number = old_process_id;
                segment.name = "OldProcess" + QString::number(-1 * old_process_id);
                p.segments.push_back(segment);
                old_processes.push_back(p);
                main_memory.segments.push_back(segment);
                old_process_id--;
            }
        }

        process last;
        last.id = old_process_id;
        if (main_memory.holes[main_memory.holes.size() - 1].base + main_memory.holes[main_memory.holes.size() - 1].limit != main_memory.size) {
            segment segment;
            segment.base = main_memory.holes[main_memory.holes.size() - 1].base + main_memory.holes[main_memory.holes.size() - 1].limit;
            segment.limit = main_memory.size - segment.base;
            segment.process_number = last.id;
            segment.name = "OldProcess" + QString::number(-1 * last.id);
            a.segments.push_back(segment);
            main_memory.segments.push_back(segment);
            old_processes.push_back(last);
        }
    }
}
