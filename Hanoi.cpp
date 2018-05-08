#include "Hanoi.h"
#include <iostream>

void Hanoi::initialize(int n){
    for (int i=0; i<3; i++){
        towers[i] = new IntStack();
        }
}

void Hanoi::turn(int n){
	solveRecursive(n, 0, 2, 1);
}

void Hanoi::move(int start, int goal){
	std::cout << "move " << start << "->" << goal << std::endl;
    towers[goal]->push(towers[start]->pop());
}

void Hanoi::solveRecursive(int n, int start, int goal, int temp){
    if (n == 0) return;
    solveRecursive(n-1, start, temp, goal);
    move(start, goal);
    solveRecursive(n-1, temp, goal, start);

}
