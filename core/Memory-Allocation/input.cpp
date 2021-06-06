#include "input.h"

using namespace std;

//vector<process> new_processes;
//char method;
//input(main_memory, new_processes, method);
//allocation(main_memory, new_processes, method);


void input(memory &main_memory, vector<process> &new_processes, char &method) {
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
	sort(main_memory.holes.begin(), main_memory.holes.end(), [](hole a, hole b) { return a.base < b.base; });

		//creating old processes
	vector<process> old_processes;
	process a;
	a.id = -1;
	int old_process_id = -1;
	if (main_memory.holes[0].base != 0) {
		segment segment;
		segment.base = 0;
		segment.limit = main_memory.holes[0].base;
		segment.process_number = a.id;
		segment.name = "OldProcess" + -a.id;
		a.segments.push_back(segment);
		old_processes.push_back(a);
		old_process_id--;
	}
	
	for (int i = 0; i < main_memory.holes.size() - 1; i++) {
		if (main_memory.holes[i].base + main_memory.holes[i].limit != main_memory.holes[i + 1].base) {
			process p;
			p.id = old_process_id;
			segment segment;
			segment.base = main_memory.holes[i].base + main_memory.holes[i].limit;
			segment.limit = main_memory.holes[i+1].base - segment.base;
			segment.process_number = old_process_id;
			segment.name = "OldProcess" + -old_process_id;
			p.segments.push_back(segment);
			old_processes.push_back(p);
			old_process_id--;
		}
	}

	process last;
	last.id = old_process_id;
	if (main_memory.holes[main_memory.holes.size()-1].base + main_memory.holes[main_memory.holes.size() - 1].limit != main_memory.size) {
		segment segment;
		segment.base = main_memory.holes[main_memory.holes.size() - 1].base + main_memory.holes[main_memory.holes.size() - 1].limit;
		segment.limit = main_memory.size - segment.base;
		segment.process_number = last.id;
		segment.name = "OldProcess" + -last.id;
		a.segments.push_back(segment);
		old_processes.push_back(last);
	}

	
	done = false;
	counter = 1;

	//holes input
	while (true) {
		process temp_process;
		temp_process.id = counter;
		
		cout << "enter number of segments of process("<<counter<<"): ";
		int num;
		cin >> num;
		for (int i = 0; i < num; i++) {
			segment segment;
			segment.process_number = counter;
			cout << "enter " << i + 1 << "th segment name: ";
			cin >> segment.name;
			cout << "enter " << i + 1 << "th segment size: ";
			cin >> segment.limit;
			temp_process.segments.push_back(segment);
		}
		new_processes.push_back(temp_process);
		cout << "are we done? (0/1)";
		cin >> done;
		if (done)
			break;
		counter++;
	}


	//allocation method
	//1-best 2-first 3-worst
	cout << "Choose allocation method: ";
	cout << " 1) best-fit " << " 2) first-fit " << " 3) worst-fit ";
	cin >> method;

}