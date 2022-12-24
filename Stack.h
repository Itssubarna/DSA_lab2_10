#ifndef Stack_h
#define Stack_h
#include <cstddef>


class Stack{

    public:

    //Stack(){}
    //~Stack(){}

    virtual void push (int a) = 0 ;
    virtual void pop() = 0;
    virtual int top() = 0;
    virtual bool IsEmpty() = 0;
    virtual bool IsFull() = 0;


};

#endif