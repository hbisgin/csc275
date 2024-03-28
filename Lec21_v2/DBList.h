//
// Created by halil on 11/11/2021.
//

#ifndef LEC20_DOUBLYLINKEDSTUFF_H
#define LEC20_DOUBLYLINKEDSTUFF_H
#include<iostream>

using namespace std;

class DBNode{
public:
    DBNode(){}
    DBNode(int theData):data(theData), nextLink(NULL), prevLink(NULL){}
    DBNode(int theData, DBNode *prev, DBNode *next):data(theData), nextLink(next), prevLink(prev){}
    int getData(){return data;}
    void setData(int theData){data = theData;}
    DBNode *getPrevLink(){return prevLink;}
    void setPrevLink(DBNode *ptr){prevLink=ptr;}
    DBNode *getNextLink(){return nextLink;}
    void setNextLink(DBNode *ptr){nextLink=ptr;}
private:
    int data;
    DBNode * nextLink;
    DBNode * prevLink;

};

void headInsert(DBNode * &head, int theData)
{
    DBNode *newHead = new DBNode(theData, NULL, head); //creating a node and its next becomes the current first node
    //currentfirst node should also see this newly creaTED NODE
    head->setPrevLink(newHead); //this will create a link backward from the current first node
    head = newHead; //head->[newly created node]->[old first node]
}

void displayDBlist(DBNode *head)
{
    DBNode *mario = head;
    while(mario!=NULL)
    {
        cout<<mario->getData()<<endl;
        mario = mario->getNextLink();
    }
}

void removeNode(DBNode * &head, DBNode *discard) //I assume that I'm not removing first and last initially
{
    DBNode * prev = discard->getPrevLink();
    DBNode * next = discard->getNextLink();
    prev->setNextLink(next);
    next->setPrevLink(prev);
    delete discard;
}

DBNode * search(DBNode *head, int target)
{
    DBNode *here = head;
    if (here==NULL)
    {
        return NULL;
    }else{
        while(here->getData()!=target && here->getNextLink()!=NULL)
            here = here->getNextLink();
        if (here->getData()==target)
        {
            return here;
        }else{
            return NULL;
        }
    }
}

void insertEnd(DBNode *head, int theData)
{
    DBNode *mario = head;
    while(mario->getNextLink()!=NULL)
    {
        mario = mario->getNextLink();
    }
    cout<<"the last value is "<<mario->getData()<<endl;

    DBNode *temp = new DBNode(theData, mario, NULL);
    mario->setNextLink(temp);
}
#endif //LEC20_DOUBLYLINKEDSTUFF_H

