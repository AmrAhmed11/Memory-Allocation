#include "validate.h"

bool validateHole(memory& main_memory, hole new_hole) {
	memory temp_memory = main_memory;

	sort(temp_memory.holes.begin(), temp_memory.holes.end(), [](hole a, hole b) { return a.base < b.base; });

	for (int i = 0; i < temp_memory.holes.size(); i++) {
		if ((new_hole.base >= temp_memory.holes[i].base && new_hole.base < temp_memory.holes[i].base + temp_memory.holes[i].limit) || (temp_memory.holes[i].base >= new_hole.base && temp_memory.holes[i].base < new_hole.base + new_hole.limit)) {
			return false;
		}
	}
	if (new_hole.base < 0)
		return false;
    if (new_hole.base + new_hole.limit > main_memory.size)
		return false;

	main_memory.holes.push_back(new_hole);

	return true;
}
