//
// Created by halil on 4/2/2024.
//

#ifndef LEC22_STACK_H
#define LEC22_STACK_H
#include <iostream>
#include "listtoolshb.h"

template<class T>
class Stack {

public:
    Stack<T>():top(NULL){}
    void push(T theElement);
    bool isEmpty();
    void display();
    T pop();
private:
    Node<T> *top; //like a head pointer
};


#endif //LEC22_STACK_H
