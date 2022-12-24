#include "Stack.h"
#include "linkedlist.h"
#include "LinkedListStack.h"

#include <iostream>

using namespace std;

bool LinkedListStack :: IsEmpty(){

    if(l.is_empty()){
        return true;
    }       else {
        return false;
    }

}

bool LinkedListStack :: IsFull(){
        return false;
}

void LinkedListStack :: push(int a){

    Node *n = new Node();

    n->data = a;

    l.addToHead(*&n);
    l.tail = n;

}

void LinkedListStack :: pop(){

    l.removeFromHead();

}


int LinkedListStack :: top(){

    return l.head -> data;

}



