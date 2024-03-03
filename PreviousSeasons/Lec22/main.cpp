#include <iostream>
#include<list> //doubly linked list
#include<vector>
#include<stack>

#include"listtools.h"
#include"listtools.cpp" //show the absolute path

using namespace std;

struct Profile{
    int id;
    string name;
};

int main()
{
    Node<int> *iptr = new Node<int>(1, NULL);
    Profile p ={1, "Adam"};
    list<int> iList;
    vector<int> ivec;
    stack<int> iStack;


    for(int i=0;i<10; i++)
    {
        iStack.push(i);//9,8,7,6,....,0
        iList.push_back(i);
    }

     for(int i=0;i<10; i++)
    {
       cout<<iStack.top()<<endl;
       iStack.pop();
    }


    list<int>::iterator myiterator;

    for(myiterator = iList.begin(); myiterator!=iList.end(); myiterator++)
        cout<<*myiterator<<endl;


    Node<Profile> *headProfile = new Node<Profile>(p , nullptr);

    headInsert(iptr, 4);
    headInsert(iptr, 4);
    headInsert(iptr, 7);


    cout << "Hello world!" << endl;
    return 0;
}
