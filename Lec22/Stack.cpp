//
// Created by halil on 4/2/2024.
//

#include "Stack.h"
#include<iostream>
using namespace std;

template<class T>
bool Stack<T>::isEmpty() {
    return top==NULL;
}

template<class T>
void Stack<T>::push(T theElement) {
    //head = new Node<T>(theData, head); we remember this
    top = new Node<T>(theElement, top);
}

template<class T>
void Stack<T>::display() { //no need to pass the head or top pointer as we did earlier
    //you need to introduce a dummy pointer, which can be mario
    Node<T> *mario = top; // don't change top's value unless you insert (push) or delete(pop)
    while(mario!=NULL)
    {
        cout<<mario->getData()<<endl;
        mario = mario->getLink();
    }
}

template<class T>
T Stack<T>::pop() {
    if(top==NULL)
        exit(-1);
    else{
        Node<T>*discard = top; //since I'm going to remove the very first node
        T data = discard->getData();
        top  = discard->getLink(); // top = top->getLink(), currently top and discard are seeing the same address
        delete discard;
        return data;
    }

}