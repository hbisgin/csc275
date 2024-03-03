#include <iostream>
#include "Account.h"
#include "./Account.cpp" //absolute path
#include "Savings.h"
#include "./src/Savings.cpp"
using namespace  std;

struct Check{
    float amount;
    int checkNumber;
};

float operator+=(float a, Check c){return a+=c.amount;}
ostream & operator<<(ostream &os, const Check &c){os<<c.amount; return os;}

int main() {


    Account<int> A1(1000); //when you put <int>, T becomes int in your class definition
    Account<Check>A2(100); //when you put <Check>, T becomes a Check data type in your c lass definition


    A1.deposit(50);
    cout<<A1.getlastDeposit()<<endl;

    Check check1={1000, 1};
    A2.deposit(check1);
    cout<<A2.getlastDeposit()<<endl;

    Savings<int>S1(1000);

    Savings<Check>S2(2000);


    //S1.setRate(0.02);
    S1.deposit(100);
    cout<<S1.getlastDeposit()<<endl;

    Check check2={2000, 1};
   // S2.setRate(0.03);
    S2.deposit(check2);
    cout<<S2.getlastDeposit()<<endl;

    return 0;
}
