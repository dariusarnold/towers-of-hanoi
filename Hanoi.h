#ifndef HANOI_H
#define HANOI_H

#include "HanoiBase.h"

class Hanoi : public HanoiBase{
public:
    void initialize(int n);
    void turn();
    void move(int start, int goal);
    void solveTowers(int n, int start, int temp, int goal);
};

#endif // HANOI_H
