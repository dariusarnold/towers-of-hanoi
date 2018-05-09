#include "Hanoi.h"
#include <iostream>
#include <chrono>

void Hanoi::initialize(int n){
    for (int i=0; i<3; i++){
        towers[i] = new IntStack();
        }
}

void Hanoi::turn(int n){
	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	solveRecursive(n, 0, 2, 1);
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2-t1).count();
	std::cout << duration << std::endl;
}

void Hanoi::move(int start, int goal){
    towers[goal]->push(towers[start]->pop());
}

void Hanoi::solveRecursive(int n, int start, int goal, int temp){
    if (n == 0) return;
    solveRecursive(n-1, start, temp, goal);
    move(start, goal);
    solveRecursive(n-1, temp, goal, start);

}
