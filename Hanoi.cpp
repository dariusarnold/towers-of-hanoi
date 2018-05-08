#include "Hanoi.h"
#include <iostream>

void Hanoi::initialize(int n){
    for (int i=0; i<3; i++){
        towers[i] = new IntStack();
        }
}

void Hanoi::turn(){
    std::cout << "turn" << std::endl;
    solveTowers(3, 0, 1, 2);
}

void Hanoi::move(int start, int goal){
    std::cout << "moving from " << start << " to " << goal << std::endl;
    towers[goal]->push(towers[start]->pop());
}

void Hanoi::solveTowers(int n, int start, int temp, int goal){
    std::cout << "solve towers " << n << std::endl;
    if (n == 0) return;
    solveTowers(n-1, start, temp, goal);
    move(start, goal);
    solveTowers(n-1, temp, goal, start);
}
