#include <iostream>
#include "CheckBookT.h"

using namespace std;

struct Check{
    int number;
    float amount;
    string memo;
    bool operator<=(float balance){return amount<=balance;}
};

float operator-=(float balance, Check obj){return balance-=obj.amount;}
ostream & operator<<(ostream &out, Check obj)
{
    out<<obj.number<<"---"<<obj.amount<<"---"<<obj.memo;
    return out;
}


template<class T>
void display(CheckBookT<T> obj) //this will call your copy constructor;
{
    obj.displayChecks();
}

int main()
{
    cout << "Hello world!" << endl;
    Check mycheck={1, 150, "baby shower"};

    CheckBookT<float> book1;
    CheckBookT<float> book2(1000);
    cout<<book1.getBalance()<<endl;
    CheckBookT<Check> book3; //  holding CHeck array in this case by the help of my aptr
    //CheckBookT<Check> book4(1000);

    for(int i=0; i<10; i++)
        book3.writeCheck(mycheck); //I repeatedly pas the same check which is type of Check

    book3.displayChecks();

    cout<<"initial size: "<<book1.getcheckBookSize()<<endl;
    for(int i =0; i<12; i++)
        book1.writeCheck(100);

    book1.displayChecks();
    cout<<"after writing checks, size :"<<book1.getcheckBookSize()<<endl;

    cout<<"calling display"<<endl;
    display(book1);

    book2 = book1; //overloaded assignment operator called
    cout<<"calling display on my copy after assignment"<<endl;
    display(book2);
    cout<<book2.getBalance()<<endl;

    return 0;
}
