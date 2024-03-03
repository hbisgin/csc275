#include <iostream>
#include"Cartoon.h"

using namespace std;

int main()
{
    Movie m;
    Cartoon c;

    m.title="SW";
    m.setYear(1990);

    c.title = "Rogger Rabbit";
    c.setYear(1997);
    c.voice = "Jim Carry";


    //***********let's see the overloaded operator
    if(c>m)
        cout<<c.title<<" is most recent "<<m.title<<endl;

    m = c; //derived to parent
    m.print();

    //*************with pointers***
    Movie *mPtr = new Movie;
    Cartoon *cPtr = new Cartoon;
    mPtr->title = "SW";
    mPtr->setYear(1990);

    cPtr->title = "Rogger Rabbit";
    cPtr->setYear(1997);
    cPtr->voice = "Jim Carry";

    mPtr = cPtr;
    mPtr->print();


    cout << "Hello world!" << endl;
    return 0;
}
