#ifndef LinkedListStack_h
#define LinkedListStack_h

#include "Stack.h"
#include "linkedlist.h"


class LinkedListStack : public Stack{

    public:

    LinkedList l;
    // Node *TopIndex;

    LinkedListStack(){
        l.head = l.tail;
    }

    ~LinkedListStack(){}


    void push (int a);
    void pop();
    int top();
    bool IsEmpty();
    bool IsFull();



};







#endif