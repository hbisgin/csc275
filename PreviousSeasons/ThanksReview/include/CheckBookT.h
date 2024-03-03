#ifndef CHECKBOOKT_H
#define CHECKBOOKT_H

#include<iostream>
using namespace std;
//using std::cout
//using std::endl
//int *ptr = new int [SIZE] __________ spaces are adjacent, you can use the pointer arithmetic to visit them
//*(ptr+1) = ptr[1]
//fun (CheckBookT<T> obj), this function will make a local copy inside.


template<class T>
class CheckBookT
{
    public:
        CheckBookT();
        CheckBookT(float bal);
        CheckBookT(const CheckBookT<T> & rhs);
        CheckBookT<T> & operator=(const CheckBookT<T> &rhs);
        bool writeCheck(T amount);
        void displayChecks();
        float getBalance();
        void doubleSize();
        int getcheckBookSize(){return checkBookSize;}
    private:
        //void doubleSize();
        float balance, lastDeposit;
        int numOfChecks, checkBookSize;
        T *aptr;//this pointer will oversee a dynamic array as needed.
};

template<class T>
CheckBookT<T>::CheckBookT(const CheckBookT<T> & rhs)
{
    balance = rhs.balance;
    numOfChecks = rhs.numOfChecks;
    checkBookSize = rhs.checkBookSize;
    lastDeposit = rhs.lastDeposit;
    aptr = new T[checkBookSize];
    for(int i=0; i<numOfChecks; i++)
        aptr[i] = rhs.aptr[i];

}

template<class T>//obj1 = obj2; normally uou can do this, but we want to make sure obj2's data elemets are safe
CheckBookT<T> & CheckBookT<T>::operator=(const CheckBookT<T> &rhs)
{
    if(checkBookSize!=rhs.checkBookSize)
    {
        delete [] aptr;
        aptr = new T[rhs.checkBookSize];
    }
    this->balance = rhs.balance; //this.sfdfdf, self.hfhdfdfh
    numOfChecks = rhs.numOfChecks;
    checkBookSize = rhs.checkBookSize;
    lastDeposit = rhs.lastDeposit;
    for(int i=0; i<numOfChecks; i++)
        aptr[i] = rhs.aptr[i];

    return *this; //this is a pointer which points its hosting object (class)
}

template<class T>
float CheckBookT<T>::getBalance(){return balance;}

template<class T>//default
CheckBookT<T>::CheckBookT():balance(1000), numOfChecks(0), checkBookSize(4)
{
    //balance = 1000;
    aptr = new T[checkBookSize]; //i created a dynamic array with an initial size of 4
}

template<class T>//excplicit and takes one parameter
CheckBookT<T>::CheckBookT(float bal)
{
    balance = bal;
    numOfChecks = 0;
    checkBookSize = 4;
    aptr = new T[checkBookSize];
}

template<class T>
bool CheckBookT<T>::writeCheck(T amount)
{
    if(amount<=balance) //we need a overloaded operator for this <=
    {
        aptr[numOfChecks] = amount;
        balance-=amount; //we need a overloaded operator for this -=
        numOfChecks++;

        if(numOfChecks==checkBookSize/2)
            doubleSize();

        return true;
    }
    return false;
}

template<class T>
void CheckBookT<T>::displayChecks()
{
    for(int i=numOfChecks-1; i>=0; i--)
        cout<<aptr[i]<<endl; //we need a overloaded operator for this <<

}

template<class T>
void CheckBookT<T>::doubleSize()
{
    T *temp = new T[2*checkBookSize];
    for(int i=0; i<numOfChecks; i++)
        temp[i] = aptr[i];

    delete [] aptr;
    aptr = temp;
    temp = NULL;
    checkBookSize*=2; //checkBookSize = checkBookSize*2;
}

#endif // CHECKBOOKT_H
