#include <iostream>
#include"linkedlistheader.h"

using namespace std;

void insertTop(IntNode * &ptr, int data);
void displayList(IntNode *ptr);
void insert(IntNode *afterme, int data);
bool search(IntNode *start, int target);
void deleteNode(IntNode * &head, int target);

int main()
{
    cout << "Hello world!" << endl;
    IntNode *head  = new IntNode(3, NULL);
    cout<<head->getData()<<endl;
    insertTop(head, 2);
    //after this point, I have two nodes whose values are 2 and 3 respectively.
    cout<<head->getData()<<endl;
    cout<<head->getLink()->getData()<<endl;
    cout<<"below is from my display function"<<endl;
    displayList(head);

    IntNode *afterme = head; //currently I have two nodes:head-[2|link]-[3|link]
    insert(afterme, 5);

    cout<<"below is after insertion"<<endl;
    displayList(head);

    if(search(head, 10))
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;

    deleteNode(head, 5);
    cout<<"after deleting 5"<<endl;
    displayList(head);

    deleteNode(head, 2);
    cout<<"after deleting 2"<<endl;
    displayList(head);
    return 0;
}

void insertTop(IntNode * &ptr, int data)
{
   ptr  = new IntNode(data, ptr); //second parameter is a pointer
   //in this case, I want this pointer to hold my previous top node whose address was held
   //by head earlier.
}

void insert(IntNode *afterme, int data)
{
     afterme->setLink(new IntNode(data, afterme->getLink() ));
}

void displayList(IntNode *ptr)
{
    IntNode *temp = ptr;

    while(temp!=NULL)
    {
        cout<<temp->getData()<<endl;
        temp = temp->getLink();
    }

}

bool search(IntNode *start, int target)
{
    IntNode * temp = start;
    bool found = false;

    while(temp!=NULL)
    {
        if(temp->getData()==target)
            return true;

        temp = temp->getLink();
    }

    return false;

}

void deleteNode(IntNode * &head, int target)
{
    IntNode *before, *discard = head;
    bool found = false;

    while(discard!=NULL && found!=true)
    {
        if(discard->getData()==target)
        {
            found = true;
            break;
        }

        before = discard;
        discard = discard->getLink();
    }

    if(found==true && discard==head)
    {
        head = head->getLink(); //since head and discard are the same you could use head = discard->getLink()
        delete discard;
    }else if(found==true && discard!=head)
    {
        if(discard->getLink()!=NULL)
        {
            before->setLink(discard->getLink());
            delete discard;
        }
        else
        {
            before->setLink(NULL);
            delete discard;
        }

    }
}
