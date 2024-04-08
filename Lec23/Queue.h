//
// Created by halil on 4/4/2024.
//

#ifndef LEC23_QUEUE_H
#define LEC23_QUEUE_H
#include "listtoolshb.h"

template<class T>
class Queue {
public:
    Queue();
    bool isEmpty();
    void push(T element);
    void display();
    T pop();
private:
    Node<T> *front;
    Node<T> *back;
};


#include "Queue.cpp"
#endif //LEC23_QUEUE_H
