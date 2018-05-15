#ifndef HANOI_H
#define HANOI_H

#include "HanoiBase.h"

class Hanoi : public HanoiBase{
public:
	/**
	 * Initialisiere drei IntStacks
	 * @param n Anzahl Scheiben mit der der erste Stapel befuellt wird
	 */
    void initialize(int n);

    /**
     * Spielt einen Zug
     */
    void turn();

    /**
     * Bewegt einen "Ring" von start nach goal.
     * @param start
     * @param goal
     */
    void move(int start, int goal);

    /**
     * Fuehrt den gueltigen Zug zwischen a und b durch, d.h. bewegt den groesserern Ring auf den kleineren Ring.
     */
    void moveBetween(int a, int b);

    /**
     * Loest ein gegebenes Tower of Hanoi Spiel rekursiv.
     * @param n Anzahl der "Ringe", die bewegt werden muessen
     * @param start Startstapel
     * @param goal Zielstapel
     * @param temp Zwischenstapel
     */
    void solveRecursive(int n, int start, int goal, int temp);

    /**
     * Loest ein gegebenes Tower of Hanoi Spiel iterativ.
     */
    void solveIterative();

    /**
     * play-Funktion der Basisklasse HanoiBase wurde erweitert, um nach einem erfolgreichem Spiel den Schritt, in dem sich der
     * iterative Algorithmus gerade befand, zurückzusetzen.
     */
    void play(int n);

    virtual ~Hanoi();

private:

    /**
     * Gibt an ob das Spiel mit einer geraden Anzahl von Scheiben gestartet wurde.
     */
    bool even_number_of_disks;

    /**
     * Schritt in dem sich der iterative Algorithmus gerade befindet.
     */
    int step = 0;
};

#endif // HANOI_H
