#include <iostream>
#include "ArrayStack.h"
#include "Stack.h"

using namespace std;

bool ArrayStack :: IsFull(){

    if(TopIndex == MAX_SIZE - 1){
        return true;
    }   else {
        return false;
    }

}

bool ArrayStack :: IsEmpty(){

    if(TopIndex == -1){
        return true;
    }   else {
        return false;
    }

}

void ArrayStack :: push(int a ){

    if(!IsFull()){
        TopIndex ++;
        data[TopIndex]=a;
    }


}

void ArrayStack :: pop(){

    if(IsEmpty()){

        cout<<"\nThe Stack is empty."<<endl;
    }   else {
        // cout<<data[TopIndex]<<"\n"<<endl;
        TopIndex--;
    }

}

int ArrayStack :: top(){

    if( IsEmpty() ){

        cout<<"\nThe Stack is empty."<<endl;
        return -1;
    }       else{
        // cout<<data[TopIndex]<<endl;
        return data[TopIndex];
    }

}

