#include "IntStack.h"
#include <iostream>
#include <assert.h>


IntStack::IntStack(){
	std::stack<int> s;
}

void IntStack::push(int x){
	s.push(x);
}

int IntStack::pop(){
    assert(s.size() > 0);
	int value = s.top();
	s.pop();
	return value;
}

int IntStack::peek(){
	int value = s.top();
	return value;
}

bool IntStack::isEmpty(){
	return (s.size() == 0);
}

int IntStack::size(){
	return s.size();
}


