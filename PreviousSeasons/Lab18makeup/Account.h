#ifndef ACCOUNT_H
#define ACCOUNT_H

template<class T>
class Account
{
    public:
        Account();
        Account(int initBalance);
        virtual ~Account();
        void deposit( T depamount);
        T getlastDeposit();
    protected:
        int balance;
        T lastDeposit;//int/Check
    private:
};

#endif // ACCOUNT_H
