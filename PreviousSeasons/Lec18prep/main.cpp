#include <iostream>
#include"Fruit.h"
#include"../src/Fruit.cpp"

using namespace std;

int main()
{
    Fruit<int>f1;  Fruit<string>f2;
    f1.setItem(100);
    f2.setItem("A100");

    cout<<f1.getItem()<<" "<<f2.getItem()<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
