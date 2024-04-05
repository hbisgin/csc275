//
// Created by halil on 4/4/2024.
//

#include "Queue.h"
#include <iostream>
using std::cout;
using std::endl;

template<class T>
Queue<T>::Queue() {
    front = NULL;
    back = NULL;
}

template<class T>
bool Queue<T>::isEmpty() {
    return front==NULL; //return back==NULL;
}

template<class T>
void Queue<T>::push(T element) {
    if(isEmpty()) //true
    {
        front = back = new Node<T>(element, NULL); // front->[element|link=NULL]<-back
    }else{ //false, there is at least one node in the queue
        back->setLink(new Node<T>(element, NULL)); //old last node should oversee this newly created node
        back = back->getLink();
    }
}

template<class T>
void Queue<T>::display() {
    Node<T>*mario = front;
    while(mario!=NULL)
    {
        cout<<mario->getData()<<endl;
        //mario = mario->getLink();
        mario = mario->link;
    }
}

template<class T>
T Queue<T>::pop() {
    if(isEmpty()){
        cout<<"no one here!"<<endl;
        exit(1);
    }

    T result  = front->getData();
    Node<T> *discard  = front; //front should see the address of the second node if exists
    //front = front->getLink(); //let's take advantage of friend class
    front = front->link; //it's still a private member, but I'm exploiting my friendship
    if(front == NULL) //if there was only one node left and i m removing it, then its link has NULL value
    {
        back = NULL;
    }

    delete discard;
    return result;
}