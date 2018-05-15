#include <iostream>
#include "Hanoi.h"

using namespace std;

int main(){

    Hanoi h;
    for (int i = 3; i<30; i++) {
        h.play(i);
    }
}

