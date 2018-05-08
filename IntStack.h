#ifndef INTSTACK_H
#define INTSTACK_H

#include "Stack.h"
#include <stack>

/*
 * Implementiert hier einen Stack IntStack, der Integer-Zahlen speichert.
 */
class IntStack : public Stack{
public:
	//TODO: Add documentation
	IntStack();
	void push(int x);
	int pop();
	int peek();
	bool isEmpty();
	int size();
private:
	std::stack<int> s;
};

#endif // INTSTACK_H
