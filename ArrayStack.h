#ifndef ArrayStack_h
#define ArrayStack_h


#include "Stack.h"

#define MAX_SIZE 10

class ArrayStack : public Stack{

    private:

    int TopIndex ;
    int data[MAX_SIZE];

    public:

    ArrayStack(){
        TopIndex = -1;
    }

    ~ArrayStack(){}

    void push (int a );
    void pop ();
    int top();
    bool IsEmpty();
    bool IsFull();



};


#endif