#include <iostream>
#include "Hanoi.h"

using namespace std;

int notmain(){
	std::cout << "hallo welt" << std::endl;

	IntStack i;
	std::cout << i.size() << std::endl;
	i.push(1);
	i.push(2);
	std::cout << i.pop() << std::endl;
	std::cout << i.pop() << std::endl;

	return 1;
}

int main()
{

    Hanoi h;


      //Anhand dieser Schleife könnt ihr bestimmen, mit wie vielen
      //Elementen das Spiel gespielt wird.

    for (int i = 3; i<6; i++) {
        h.play(i);
    }
}

