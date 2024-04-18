#include <iostream>
#include "DBList.h"

using namespace std;

int main() {
    DBNode *head = new DBNode(5,NULL, NULL);
    std::cout << "Hello, World!" << std::endl;
    headInsert(head, 10);
    headInsert(head, 100);
    headInsert(head, 1000);
    displayDBlist(head);

    return 0;
}
