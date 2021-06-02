
#include"memory.h"
#include<iostream>
using namespace std;

void input(memory main_memory) {
	cout << "enter total memory size: ";
	cin >> main_memory.size;

	vector<hole> holes;
	bool done = false;
	int counter = 0;

	//holes input
	while (true) {
		hole temp_hole;
		temp_hole.id = counter;
		cout << "enter Hole" << temp_hole.id << " starting address: ";
		cin >> temp_hole.base;
		cout << "enter Hole" << temp_hole.id << " size: ";
		cin >> temp_hole.limit;
		main_memory.holes.push_back(temp_hole);

		cout << "are we done? (0/1)";
		cin >> done;
		if (done)
			break;

		counter++;
	}

	//creating old processes



	//allocation method
	//1-best 2-first 3-worst

}