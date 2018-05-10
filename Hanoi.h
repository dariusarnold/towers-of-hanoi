#ifndef HANOI_H
#define HANOI_H

#include "HanoiBase.h"

class Hanoi : public HanoiBase{
public:
	/**
	 * Initialisiere drei IntStacks
	 * @param n nicht genutzt, da Stapel nur initialisiert aber nich gefüllt werden
	 */
    void initialize(int n);
    /**
     * In der rekursiven Implementation ruft turn die Funktion zur Loesung auf. Turn wird verlassen, wenn das
     * Spiel geloest ist.
     * @param n Anzahl Steine zu Spielbeginn
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

    virtual ~Hanoi();
};

#endif // HANOI_H
