#ifndef HANOIBASE_H
#define HANOIBASE_H

#include "IntStack.h"

class HanoiBase
{
    public:
        /*
         * In dieser Funktion sollt ihr eure Datenstrukturen initialisieren. Insbesondere
         * sollt ihr in dem Array "towers" drei Instanzen eures IntStacks initialisieren.
         * Die Zahl n gibt an, wie viele Zahlen auf dem Ausgangsstapel liegen.
         */
        virtual void initialize(int n) = 0;

        /*
         * Diese Funktion wird für jeden Zug einmal aufgerufen. Hier dürft ihr genau eine
         * Zahl von einem der Stapel nehmen und auf einen der anderen Stapel legen. Pointer
         * auf die drei Stapel findet ihr im Array "towers".
         */
        virtual void turn(int n) = 0;

        IntStack * towers[3];

        /*
         * Diese Funktionen sollen von euch nicht verwendet werden.
         */
        void play(int n);

    private:
        void fillTower(int n);
        bool isSorted(IntStack * stack);
};

#endif // HANOIBASE_H
