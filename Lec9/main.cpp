#include <iostream>
using namespace std;

void doubleMe(int *ptr)
{
    *ptr = 2*(*ptr); //if you deference on RHS, you retrieve the value
    //if you deference on LHS, you are assigning a value through your pointer
}

class Fruit{
public:
    Fruit():name("banana"), price(0.55){}
    Fruit(string fname, float fprice):name(fname), price(fprice){}
    void display(){cout<<name<<" "<<price<<endl;};
private:
    string name;
    float price;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Fruit *fptr1 = new Fruit();
    Fruit *fptr2 = new Fruit("orange", 1.99);
    Fruit fruit("grapes", 2.99); //fruit object for grapes with price 2.99
    Fruit *fptr3 = &fruit; //I assign the address of the fruit object to fptr3
    (*fptr1).display(); //can't do cout because I need an overloaded <<, but I want to call the display function
    fptr2->display();//I can call member function through my pointers. Prefferred way is ->
    int a, b, c;
    int *testPtr; //this doesn't have any valid address.
    int *ptr = &a;
    int *ptr2 = &b; //grab the address and assign it to the pointer
    int *ptr3 = new int;// heap memory
    *ptr3 = 1000;
    cout<<*ptr3<<endl;
    a=5;
    b=1;
    c=15;
    ptr = ptr2; //ptr is starting to hold the address that ptr2 has been holding.
    cout<<ptr<<endl; //without asterisk it only shows the address of the variable
    cout<<*ptr<<" "<<*ptr2<<endl; //dereferencing *ptr, //assume couts are like RHS use
    *ptr = 100; //LHS
    cout<<a<<" "<<*ptr<<endl;
    doubleMe(&a);//this part happens through the function. no worries.
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
