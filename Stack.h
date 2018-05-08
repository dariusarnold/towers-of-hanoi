#ifndef STACK_H
#define STACK_H

/*
 * Schnittstelle für einen Stapel. Euer IntStack soll von dieser
 * Klasse erben und alle enthaltenen Methoden implementieren.
 */
class Stack
{
    public:
        virtual void push(int x) = 0;
        virtual int pop() = 0;
        virtual int peek() = 0;
        virtual bool isEmpty() = 0;
        virtual int size() = 0;
};

#endif // STACK_H
