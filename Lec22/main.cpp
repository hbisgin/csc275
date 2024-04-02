#include <iostream>
#include "listtoolshb.h"
#include "listtoolshb.cpp"
#include <list>
#include <vector>
#include "Stack.h"
#include "Stack.cpp"

using namespace std;

int main() {
    list<int> myList;
    vector<int>myVec;
    vector<int>::iterator vit; //vector iterator
    Stack<int> myStack; //since there is no one yet, the top pointer will be set to NULL
    int data;
    for (int i=0; i<5; i++)
    {
        myStack.push((i+1)*10);
        myVec.push_back((i+1)*10);
    }

    for(int i=0; i<myVec.size(); i++)
    {
        cout<<myVec[i]<<" or "<<myVec.at(i)<<endl;
    }


    for(vit = myVec.begin(); vit!=myVec.end(); vit++)
    {
        cout<<*vit<<endl;
    }


    cout<<"original stack content"<<endl;
    myStack.display();

    data = myStack.pop();
    cout<<data<<" has been removed, if you don't believe check below"<<endl;
    myStack.display();


    cout<<"below is about list tool and list from STL implementation"<<endl;
    Node<int> * head = new Node<int>(5,NULL); //hey head, your list will keep integers
    Node<string> *headS = new Node<string>("Adam", NULL);//hey headS, your list will keep strings
    string temp = "Eve";
    headInsert(headS, temp);
    for (int i=0; i<5; i++)
    {
        headInsert(head, i);
        myList.push_back((i+1)*10);
    }

    list<int>::iterator lit; //list iterator
    for(lit = myList.begin(); lit!=myList.end(); lit++) //mario = mario->getLink()
    {
        cout<<*lit<<endl; //deference the iterator which is a pointer
    }
    myList.reverse(); //reverse the list
    for(lit = myList.begin(); lit!=myList.end(); lit++) //mario = mario->getLink()
    {
        cout<<*lit<<endl; //deference the iterator which is a pointer
    }


    display(head);
    display(headS);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
