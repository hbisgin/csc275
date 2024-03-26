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
    //IntNode *back;
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

IntNode * search(IntNode *head, int target)
{
    IntNode *here = head;
    if (here==NULL)
    {
        return NULL;
    }else{
        while(here->getData()!=target && here->getLink()!=NULL)
            here = here->getLink();
        if (here->getData()==target)
        {
            return here;
        }else{
            return NULL;
        }
    }
}

void removeNode(IntNode * head, int data) //this function asssumes you have target in the list and target is not in the first node
{
    IntNode *before=head, *discard;
    while(before->getLink()->getData()!=data) //before->[data|link]-[data|link]
    {
        before = before->getLink();
    }
    discard  = before->getLink(); //discard knows which node to be removed
    before->setLink(discard->getLink());
    delete discard; //this is the last step you have to take
}

void insertEnd(IntNode * &ptr, int theData)
{
   IntNode *mario = ptr; //assuming ptr is the head node
   while(mario->getLink()!=NULL)
   {
       mario = mario->getLink();
   }

   cout<<mario->getData()<<endl;
    mario->setLink(new IntNode (theData, NULL));
}
#endif //LEC19_LINKEDSTUFF_H
