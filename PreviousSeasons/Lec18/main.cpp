#include <iostream>
#include"Account.h"
#include"../src/Account.cpp" //absolute path, you're giving the path

using namespace std;

struct Check{
        int amount;
        int number;
    };

int operator+=(int bb, Check c){return bb+c.amount;}

int main()
{
    Account<int> A1;
    A1.deposit(500);
    cout<<A1.getlastDeposit()<<endl;
    Account<Check>A2;
    Account<float>A3;
    //Account<double>A4;
    A3.deposit(499.99);
    cout<<A3.getlastDeposit()<<endl;

    Check check1={400, 101};
    //A2.deposit(500); //illegal
    A2.deposit(check1);
    cout<<A2.getlastDeposit().amount<<endl; //you can't print an object without an overloaded operator<<

    cout << "Hello world!" << endl;
    return 0;
}
