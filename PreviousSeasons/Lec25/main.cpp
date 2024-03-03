#include <iostream>
#include<string>

using namespace std;

class NoMilk{
public:
    NoMilk(int indonut):count(indonut){}
    int getCount(){return count;}
private:
    int count;
};

class NegativeNumber{
public:
    NegativeNumber(){}
    NegativeNumber(string in):message(in){}
    string getMessage(){return message;}
private:
    string message;
};

class DivideByZero{};

int main()
{
    int donut, milk;
    cout << "Hello world!" << endl;
    cout<<"donut?"<<endl;
    cin>>donut;
    cout<<"milk"<<endl;
    cin>>milk;

    try{
        if(milk<=0)
            throw donut; //could have thrown anything as long as it's compatible woith
                //your type in the catch
    }catch(int e)
    {
        cout<<e<<" was thrown"<<endl;
    }

     try{
        if(milk<=0)
            throw donut; //could have thrown anything as long as it's compatible woith
                //your type in the catch
    }catch( ... ) //unexpected exception
    {
        cout<<" something was thrown, it must be related to milk"<<endl;
    }

    try{
        if(milk<=0)
            throw NoMilk(donut);
        cout<<"you're in try block for NoMilk object and value is valid"<<endl;
    }catch(NoMilk obj){ //e is usually used to refer to exception

        cout<<obj.getCount()<<" thrown since there's no milk"<<endl;

    }

    int pencils, erasers;
    cout<<"enter pencils and erasors"<<endl;
    cin>>pencils>>erasers;

    try{
        if(pencils<0)
            throw NegativeNumber("pencils");
        if(erasers<0)
            throw NegativeNumber("erasers");
        if(erasers==0)
            throw DivideByZero();

    }catch(DivideByZero){
        cout<<"you try to divide by zero, don't do that"<<endl;
    }catch(NegativeNumber e){
        cout<<"there is a problem with "<<e.getMessage()<<endl;
    }catch(...){
        cout<<"I don't know why you came here"<<endl;
    }


    cout<<"program ends"<<endl;
return 0;
}
