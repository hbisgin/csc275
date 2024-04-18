//
// Created by halil on 4/4/2024.
//

#include "Queue.h"
using std::cout;
using std::endl;

template<class T>
Queue<T>::Queue() {front=NULL; back=NULL;}

template<class T>
void Queue<T>::push(T element) {
    if(isEmpty())
    {
        front = back = new Node<T>(element, NULL);
    }else{
        back->link = new Node<T>(element, NULL);
        back = back->link;

    }

}

template<class T>
bool Queue<T>::isEmpty() {
    return front==NULL;
}

template<class T>
void Queue<T>::display(){
    Node<T>*mario = front;
    while(mario!=NULL)
    {
        cout<<mario->data<<endl;
        mario = mario->link;
    }
}