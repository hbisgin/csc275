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
    head->setPrevLink(newHead);
    head = newHead;
}

void displayDBlist(DBNode *head)
{
    DBNode *mario = head;
    while(mario->getNextLink()!=NULL)
    {
        cout<<mario->getData()<<endl;
        mario = mario->getNextLink();
    }
}
#endif //LEC20_DOUBLYLINKEDSTUFF_H
