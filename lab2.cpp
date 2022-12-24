#include "Stack.h"
#include "ArrayStack.h"
#include "ArrayStack.cpp"
#include "linkedlist.h"
#include "linkedlist.cpp"
#include "LinkedListStack.h"
#include "LinkedListStack.cpp"

#include <iostream>

using namespace std;

int main(){

    Stack *s1 = new ArrayStack;

    s1->push(5);
    s1->push(10);
    s1->push(11);
    s1->push(6);
    s1->push(15);
    s1->push(8);
    s1->push(9);


    s1->pop();

    cout<<"\nThe top element of the array stack is: "<<s1->top()<<endl;

    if( s1->IsEmpty() ){
        cout<<"\nThe array stack is empty."<<endl;
    }       else {
        cout<<"\nThe array stack is not empty."<<endl;
    }

    if( s1->IsFull() ){
        cout<<"\nThe array stack is full."<<endl;
    }       else {
        cout<<"\nThe array stack is not full."<<endl;
    }

    Stack *s2 = new LinkedListStack;


    s2->push(10);
    s2->push(5);
    s2->push(11);
    s2->push(6);
    s2->push(15);
    s2->push(8);
    s2->push(9);

    s2 -> pop();

    cout<<"\nThe top element of the linked list stack is: "<<s2->top()<<endl;

    if( s2->IsEmpty() ){
        cout<<"\nThe linked list stack is empty."<<endl;
    }       else {
        cout<<"\nThe linked list stack is not empty."<<endl;
    }
}