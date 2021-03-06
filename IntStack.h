#ifndef INTSTACK_H
#define INTSTACK_H

#include "Stack.h"
#include <stack>

/*
 * Stack zum Speicher von integer-Zahlen.
 */
class IntStack : public Stack{
public:
	IntStack();
	/**
	 * Push integer value x on stack.
	 */
	void push(int x);
	/**
	 * Remove top element from stack and return its value.
	 * @return int value of top element
	 */
	int pop();
	/**
	 * Get value from top element without removing it.
	 * @return int value of top element
	 */
	int peek();
	/**
	 * Check if stack is empty.
	 * @return bool: true for empty stack, false for full stack
	 */
	bool isEmpty();
	/**
	 * Return number of elements in stack
	 */
	int size();

	virtual ~IntStack(){};
private:
	std::stack<int> s;
};

#endif // INTSTACK_H
