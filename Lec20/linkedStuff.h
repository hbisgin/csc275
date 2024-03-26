//
// Created by halil on 11/9/2021.
//

#ifndef LEC19_LINKEDSTUFF_H
#define LEC19_LINKEDSTUFF_H
#include <iostream>
using namespace  std;
struct Node{
    int data;
    Node * next;
};

class IntNode{
public:
    IntNode(){}
    IntNode(int thedata):data(thedata), next(NULL){}
    IntNode(int thedata, IntNode *ptr):data(thedata), next(ptr){}
    void setData(int thedata){data = thedata;}
    void setLink(IntNode *ptr){next = ptr;}
    int getData(){return data;}
    IntNode * getLink(){return next;}
private:
    int data;
    IntNode * next;
};

void insertHead(IntNode * &head , int thedata) //this function assumes there is at least one node in the list
{
    //IntNode * ptr = new IntNode(thedata, head);
    //head = ptr;

    head = new IntNode(thedata, head);
}

void insertAfterMe(IntNode *afterme, int theData)
{
           //IntNode *ptr   = new IntNode(theData, afterme->getLink()); //linked to the next node
           //afterme->setLink(ptr);
           afterme->setLink(new IntNode(theData, afterme->getLink()));
}

void displayList(IntNode *start)
{
    IntNode * ptr = start;
    while(ptr!=NULL)
    {
        cout<<ptr->getData()<<endl;
        ptr = ptr->getLink();
    }
}


#endif //LEC19_LINKEDSTUFF_H
