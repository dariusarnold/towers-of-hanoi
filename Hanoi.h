#ifndef HANOI_H
#define HANOI_H

#include "HanoiBase.h"

class Hanoi : public HanoiBase{
public:
	/**
	 * Initialisiere drei IntStacks
	 * @param n
	 */
    void initialize(int n);
    /**
     *
     * @param n
     */
    void turn(int n);
    /**
     * Bewegt einen "Ring" von start nach goal.
     * @param start
     * @param goal
     */
    void move(int start, int goal);
    /**
     * Loest ein gegebenes Tower of Hanoi Spiel rekursiv.
     * @param n Anzahl der "Ringe", die bewegt werden muessen
     * @param start Startstapel
     * @param goal Zielstapel
     * @param temp Zwischenstapel
     */
    void solveRecursive(int n, int start, int goal, int temp);
};

#endif // HANOI_H
