#include "HanoiBase.h"
#include <iostream>

using namespace std;

void HanoiBase::play(int n) {
    initialize(n);
    fillTower(n);
    do {
        turn();
    } while(towers[2]->size()<n);


    if (isSorted(towers[2])) {
        cout << "Spiel mit " << n << " Zahlen erfolgreich!" << endl;
        return;
    }

    cout << "Spiel mit " << n << " Zahlen NICHT erfolgreich!" << endl;
    return;
}

void HanoiBase::fillTower(int n) {
    for (int i = 0; i<n; i++) {
        towers[0]->push(n-i);
    }
}

bool HanoiBase::isSorted(IntStack * stack) {
    if (stack->isEmpty()) return true;
    int last = stack->pop();
    while(!stack->isEmpty()) {
        int cur = stack->pop();
        if (last>=cur)
            return false;
    }
    return true;
}
