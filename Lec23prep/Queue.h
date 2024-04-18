//
// Created by halil on 4/4/2024.
//

#ifndef LEC23PREP_QUEUE_H
#define LEC23PREP_QUEUE_H
#include "listtoolshb.h"

template<class T>
class Queue {
public:
    Queue();
    void push (T element);
    bool isEmpty();
    void display();
private:
    Node<T> *front;
    Node<T> *back;
};


#endif //LEC23PREP_QUEUE_H
