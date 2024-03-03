#include <iostream>
#include"DoublyLinkedList.h"

using namespace std;

void insertTop(DLIntNode * &head, int theData); //stacks
void insertEnd(DLIntNode * &head, int theData);  //queue
void displayDL(DLIntNode *head);
void deleteDL(DLIntNode * &head, int target);

int main()
{
    DLIntNode * head = new DLIntNode(100, NULL, NULL);
    insertTop(head, 10);
    insertTop(head, 1000);
    insertTop(head, 1);
    cout<<head->getData()<<endl;

    cout << "Hello world!" << endl;
    displayDL(head);
    deleteDL(head, 1000);
    cout<<"after deletioon"<<endl;
    displayDL(head);

    deleteDL(head, 100);
    cout<<"after deletioon"<<endl;
    displayDL(head);

    deleteDL(head, 1);
    cout<<"after deletioon"<<endl;
    displayDL(head);


    insertEnd(head, 10000);
    cout<<"after insertion"<<endl;
    displayDL(head);
    return 0;
}

void insertTop(DLIntNode * &head, int theData)
{
    DLIntNode * newhead = new DLIntNode(theData, NULL, head);
    head->setPreviousLink(newhead);
    head = newhead;
}

void displayDL(DLIntNode *head)
{
    DLIntNode *traveler = head;
    while(traveler!=NULL)
    {
        cout<<traveler->getData()<<endl;
        traveler = traveler->getNextLink();
    }

}

void deleteDL(DLIntNode * &head, int target)
{
    DLIntNode *discard = head;
    bool found = false;
    while(discard!=NULL && found!=true) //this while searches for my target to be removed.
    {
        if(discard->getData()==target)
        {
            found=true;
            break;
        }
        else{
            discard = discard->getNextLink();
        }
    }

    if(discard==head)
    {
        head = head->getNextLink();
        head->setPreviousLink(NULL);
        delete discard;
    }else{
        if(discard->getNextLink()!=NULL){
            DLIntNode *before = discard->getPreviousLink();
            DLIntNode *after = discard->getNextLink();
            after->setPreviousLink(before);
            before->setNextLink(after);
            delete discard;
        }else{ //this implies you're the last node
            discard->getPreviousLink()->setNextLink(NULL);
            delete discard;
        }
    }
}


void insertEnd(DLIntNode * &head, int theData)
{

    DLIntNode *temp = head;
    while(temp->getNextLink()!=NULL) //null is a marker of end of the list
    {
        temp = temp->getNextLink();
    }
    DLIntNode * ptr = new DLIntNode(theData, temp, NULL );
    temp->setNextLink(ptr);

}
