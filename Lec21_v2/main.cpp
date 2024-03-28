#include <iostream>
#include "DBList.h"
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    DBNode * head = new DBNode(3, NULL, NULL);
    headInsert(head, 5);
    for (int i=0; i<10; i++)
        headInsert(head, 10*i);
    displayDBlist(head);

    DBNode * ptr = search(head, 20); //pointer of the node which has 20 in it
    removeNode(head, ptr);
    cout<<"after removing 20"<<endl;
    displayDBlist(head);
    insertEnd(head, -100);

    cout<<"after inserting -100"<<endl;
    displayDBlist(head);

    return 0;
}
