#include "Hanoi.h"
#include <iostream>
#include <chrono>

void Hanoi::initialize(int n){
    for (int i=0; i<3; i++){
        towers[i] = new IntStack();
        }
    even_number_of_disks = n % 2 == 0;
}

void Hanoi::play(int n){
	HanoiBase::play(n);
	step = 0;
}

void Hanoi::turn(){
	solveIterative();
}

void Hanoi::move(int start, int goal){
	//std::cout << "move " << start << "->" << goal << std::endl;
	towers[goal]->push(towers[start]->pop());
}

void Hanoi::moveBetween(int a, int b){
	// move from full to empty
	if (towers[a]->size() == 0) move(b, a);
	else if (towers[b]->size() == 0) move(a, b);
	// else move the lower number disk on top of the higher number disk
	else if (towers[a]->peek() < towers[b]->peek()){
		move(a, b);
	}else{
		move(b, a);
	}
}

void Hanoi::solveRecursive(int n, int start, int goal, int temp){
    if (n == 0) return;
    solveRecursive(n-1, start, temp, goal);
    move(start, goal);
    solveRecursive(n-1, temp, goal, start);
}

Hanoi::~Hanoi(){
	for (int i=0; i<3; i++){
		delete towers[i];
	}
}


void Hanoi::solveIterative(){
	//std::cout << step << std::endl;
	switch (step){
	case 0:
		even_number_of_disks ? moveBetween(0, 1) : moveBetween(0,2);
		break;
	case 1:
		even_number_of_disks ? moveBetween(0, 2) : moveBetween(0,1);
		break;
	case 2:
		moveBetween(1, 2);
		break;
	}
	step++;
	if (step > 2) step = 0;
}
