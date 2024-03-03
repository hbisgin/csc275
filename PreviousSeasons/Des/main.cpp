#include <iostream>

using namespace std;

class B{
public:
    B(){cout<<"B()"<<endl;}
    //virtual ~B(){cout<<"~B()"<<endl;}
    ~B(){cout<<"~B()"<<endl;}

};

class D:public B
{
public:
    D(){cout<<"D()"<<endl;}
    //virtual ~D(){cout<<"~D()"<<endl;}
    ~D(){cout<<"~D()"<<endl;}


};

int main()
{
    cout << "Hello world!" << endl;
    B *bptr = new D(); //a parent pointer can hold a child/derived object
    delete bptr;
    return 0;
}
