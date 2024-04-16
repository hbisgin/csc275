#include <iostream>
using namespace std;

class Arithmetic{
public:
    Arithmetic(){}
    Arithmetic(string theMessage):message(theMessage){}
    string getMessage()const{return message;}
protected:
    string message;
};

class NegativeNumber:public Arithmetic{
public:
    NegativeNumber():Arithmetic(){}
    NegativeNumber(string theMessage):Arithmetic(theMessage){}
};

class DivisonByZero{}; //trivial exception

void childParent(int number, string item)
{
    if (number<0)
        throw NegativeNumber(item);
}

void parentChild(int number, string item)
{
    if (number<0)
        throw Arithmetic(item);
}

void myfun(string input)
{
    if(input=="hi")
        throw input;
}

double safeDivide(int a, int b)
{
   if (b==0)
       throw DivisonByZero();

    return a/static_cast<double>(b);
}

int main() {
    int a, b;
    string input;
    std::cout << "Say something" << std::endl;
    cin>>input;
    cout<<"a?\n";
    cin>>a;
    cout<<"b?\n";
    cin>>b;

    try{
        parentChild(b, input);
    }catch(Arithmetic e) { //if you try to catch a parent object with a child object, you run into issues.
        cout << e.getMessage() << " can't have negative numbers, this from A catch for parentChild" << endl;
    }


    try{
        childParent(b, input);
    }catch(Arithmetic e){
        cout<<e.getMessage()<<" can't have negative numbers, this from A catch"<<endl;
    }catch(NegativeNumber e){
        cout<<e.getMessage()<<" can't have negative numbers, this from NN catch"<<endl;
    }

    try{
        myfun(input);
    }
    catch(string e){
        cout<<"you said "<<e<<endl;
    }

    try{
        double result = safeDivide(a,b); //this function has a throw statement in ase something goes wrong
        cout<<"result is "<<result<<endl;
    }catch(DivisonByZero){
        cout<<"please make sure your denominator is not 0"<<endl;
    }
    return 0;
}
