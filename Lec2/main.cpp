#include <iostream>
using namespace std;

int doublenum(int a) //pass by value
{
    a=2*a;
    return a;
}

void doubleme(int &a) //& brings the address of this variable, a from the memory, doesn't create a local copy
{
    a = 2*a; //not returning anything
}
int main() {
    int  num = 5;
    int result;
    result  = doublenum(num);
    std::cout<<result<<std::endl;
    cout<<num<<endl;
    std::cout << "Hello, World!" << std::endl;

    doubleme(num); //in pass by reference function call, we don't type &.
    cout<<num<<endl;
    return 0;
}
