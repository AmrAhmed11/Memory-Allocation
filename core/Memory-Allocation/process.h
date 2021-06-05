#ifndef PROCESS_H
#define PROCESS_H

#include <vector>
#include "segment.h"
struct process {
	int id;
	std::vector<segment> segments;
};

#endif