#include <iostream>
#include "linkedStuff.h"
using namespace std;
//arrays used to have indexes. SO i used to use [] operator and manipulate my array. change data elements
//in list structure, memory is not consecutively used or consumed. I have to make sure that I can travel
//from one node to another through their pointers because they know the next address.
int main() {
    std::cout << "Hello, World!" << std::endl;
    /*
    Node *head = new Node;
    head->data = 100;
    head->next = NULL;

    head->next = new Node; //head-->[100|*next]--->[ | ]
    head->next->data=150; //head-->[100|*next]--->[150| ]
    */
    //=====================================================
    IntNode * head = new IntNode(3); //head pointer is the beginning of everything. You should maintain this
    //very carefully. You should not lose this. It's the handle of your keychain
    //if you lose it, you'll lose your keys.
    cout<<head->getData()<<endl;
    cout<<head->getLink()<<endl;

    IntNode * ptr = new IntNode(4); //now it is not visible to the first node yet

    head->setLink(ptr); //head-->[ 3| *next ]-->[ 4 | *next ]
    //always make sure that your next pointer has the address of the next node. Then your link will be built

    insertHead(head, 5); //this will be the first node now on.
    // head-->[ 5| *next ]-->[ 3| *next ]-->[ 4 | *next ]

    //I'm gonna use a pointer to use the firstr address
    //since i"m already done with ptr
    ptr = head; //head is not changed. I only let ptr know the address of the first node

    cout<<"before removal"<<endl;
    displayList(head);

    //removeNode(head, 3);

    cout<<"after removal"<<endl;
    displayList(head);

    return 0;
}
