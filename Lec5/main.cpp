#include<iostream>
#include<string>

using namespace std;

class Fruit{
public:
    Fruit();
    Fruit(string fname, float fprice);
    void display();
private:
    string name;
    float price;
};

class ATM{
public:
    ATM(){balance=250; numOfTransactions=0;}
    ATM(float inbalance):balance(inbalance), numOfTransactions(0){}//initialization list
    ATM(float inbalance, int numofT); //explicit
    void initBalance(float amount);
    void showBalance();
    void deposit(float amount);
    bool withdraw(float amount);
    int getTransactions();

private:
    float balance;
    int numOfTransactions;

};

int main()
{
    ATM atm_obj, atm_obj2(500, 1), atm_obj3(400);
    atm_obj = ATM(300, 5);
    int a, b;
    a= b;
    atm_obj.initBalance(250);
    atm_obj.showBalance();
    atm_obj.deposit(250);

    atm_obj2.showBalance();
    atm_obj3.showBalance();

    Fruit fruit1("oranges", 2.99), fruit2;
    fruit1.display();
    fruit2.display();

    /*
    atm_obj.balance=250;
    atm_obj.showBalance();
    atm_obj.deposit(250);
    atm_obj.showBalance();
    */
    cout<<atm_obj.withdraw(100)<<endl;

    atm_obj.showBalance();

    cout<<atm_obj.getTransactions()<<endl;


}


Fruit::Fruit() { //default constructor
    name = "banana";
    price = 0.89;
}
Fruit::Fruit(string fname, float fprice) {//if you create constructor with parameters, make sure you have ddefault one
    name = fname;
    price = fprice;
}

void Fruit::display() {
    cout<<name<<" "<<price<<endl;
}


ATM::ATM(float inbalance, int numofT)
{
    balance = inbalance;
    numOfTransactions = numofT;
}


void ATM::initBalance(float amount)
{
    balance = amount;
    numOfTransactions=0;
}

void ATM::showBalance()
{
    cout<<balance<<endl;
}

void ATM::deposit(float amount)
{
    balance+=amount;
    numOfTransactions++;
}

bool ATM::withdraw(float amount)
{
    if (balance>=amount)
    {
        balance-=amount;
        cout<<"remaining balance = "<<balance<<endl;
        numOfTransactions++;
        return true;
    }else{

        return false;
    }

}

int ATM::getTransactions()
{
    return numOfTransactions;
}

