#ifndef MEMORY_H
#define MEMORY_H
#include <algorithm>
#include <vector>
#include "segment.h"
#include "hole.h"



struct memory {
	int size;
	std::vector<segment> segments;
	std::vector<hole> holes;
};



#endif