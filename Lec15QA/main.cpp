#include <iostream>
#include "Fruit.h"

using std::cout;
using std::endl;

//non-member example
bool operator==(Fruit const &lhs, Fruit const &rhs)
{
    return lhs.getPrice()==rhs.getPrice();
}

//pass by value functions create a local copy which have a pointer too
void display(Fruit fp) //this function creates a local copy of your Fruit object
{
    //when you don't have any pointers, this will destroy the object without any issues
    //when you have pointers, destroyed objects' pointers may lead problems regarding memory/dangling pointers
    cout<<fp.getPrice()<<endl;
}//once you're done with the function, everything will be destroyed like ny other program/function

int main() {
    std::cout << "Hello, World!" << std::endl;
    Fruit fruit1, fruit2("apple", 1.99);
    Fruit *fptr1; //declared but not initialized
    Fruit *fptr = new Fruit("orange", 1.55); //declare + initialize
    Fruit *afptr = new Fruit[10]; //afptr will act like an array, so need for ->
    Fruit *nptr = NULL;
    //cout<<nptr->getPrice()<<endl; // you should not do this because it's a NULL pointer
   for (int i=0;i<10;i++)
   {
       cout<<afptr[i].getPrice()<<endl;
   }
   delete [] afptr; //pointers are important for dynamic memory allocation/management

    for (int i=0;i<10;i++)
    {
        cout<<afptr[i].getPrice()<<endl; //these values can be some garbage values since we deleted
    }

   cout<<(*fptr).getPrice()<<endl;
   cout<<fptr->getPrice()<<endl;
    delete fptr;
    //I want to compare their prices with ==
    if (fruit1==fruit2)
        cout<<"they have the same price"<<endl;
    else
        cout<<"they have different prices"<<endl;

    if (fruit1<fruit2)
        cout<<"first one is cheaper"<<endl;

    if (fruit1!=fruit2)
        cout<<"Youre right they have different prices"<<endl;
    return 0;
}
