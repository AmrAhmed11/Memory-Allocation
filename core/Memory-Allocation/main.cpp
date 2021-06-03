#include <iostream>
#include "memory.h"
#include "segment.h"
#include "input.cpp"
#include "allocate.cpp"
#include "deallocate.cpp"
#include "process.h"

using namespace std;

int main() {
	memory main_memory;
	main_memory.size=20;
	int no_holes=5;
	vector <hole> inholes(5);
	inholes[0].base=0;
	inholes[1].base=10;
	inholes[2].base=12;
	inholes[3].base=15;
	inholes[4].base=19;
	inholes[0].limit=10;
	inholes[1].limit=2;
	inholes[2].limit=3;
	inholes[3].limit=4;
	inholes[4].limit=1;
	vector <process> insegment(3);
	segment x0;
	x0.limit = 2;
	x0.process_number=0;
	segment x1;
	x0.limit = 2;
	x0.process_number=1;
	segment x2;
	x0.limit = 1;
	x0.process_number=2;
	segment x3;
	x0.limit = 6;
	x0.process_number=0;
	insegment[0].segments.push_back(x0);
	insegment[0].segments.push_back(x3);
	insegment[1].segments.push_back(x1);
	insegment[2].segments.push_back(x2);
	for (int i=0;i<no_holes;i++){
		main_memory.holes.push_back(inholes[i]);
	}
	allocation(main_memory, insegment, 1);

	for (int i=0;i<main_memory.segments.size();i++){
		cout << main_memory.segments[i].base<<"     "<<i<<"     "<<main_memory.segments[i].process_number<<'\n';
	}	
}