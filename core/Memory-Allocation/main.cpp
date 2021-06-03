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
	vector <process> new_processes;
	char method;
	input(main_memory,new_processes,method);
	allocation(main_memory, new_processes, method);
	for (int i=0;i<main_memory.segments.size();i++){
		cout << main_memory.segments[i].base<<"     "<<i+1<<"     "<<main_memory.segments[i].process_number<<'\n';
	}	
}