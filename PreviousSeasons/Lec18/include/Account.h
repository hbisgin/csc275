#ifndef ACCOUNT_H
#define ACCOUNT_H

template<class T>
class Account
{
    public:
        Account();
        virtual ~Account();
        void deposit( T depamount);
        T getlastDeposit();
    protected:
        int balance;
        T lastDeposit;//int/Check
    private:
};

#endif // ACCOUNT_H
