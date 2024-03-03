#include <iostream>
#include "funtemplate.h"

using namespace std;

int main()
{
    string name1="Halil", name2="Aaron";
    int a=5, b=6;
    int array[5]={1,4,-1,5,32};
    Fruit<int>f1;  Fruit<string>f2;
    f1.setItem(100);
    f2.setItem("A100");

    cout<<f1.getItem()<<" "<<f2.getItem()<<endl;
    string names[4]={"Eve", "Adam", "Jarrad", "Chris"};
    cout<<"min is "<<mymin(array, 5)<<endl;
    cout<<"min is "<<mymin(names, 4)<<endl;

    cout << "Hello world! " <<name1<<" "<<name2<<endl;
    myswap(name1, name2);
    myswap(a,b);
    cout << "Hello world! " <<name1<<" "<<name2<<endl;
    return 0;
}
