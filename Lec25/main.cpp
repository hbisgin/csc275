#include <iostream>
using namespace std;

class NoMilk{
public:
    NoMilk(){}
    NoMilk(int howmany):count(howmany){}
    int getCount(){return count;}
private:
    int count;
};

class NegativeNumber{
public:
    NegativeNumber(){}
    NegativeNumber(string theMessage):message(theMessage){}
    string getMessage(){return message;}
private:
    string message;
};

class DividebyZero{}; //trivial class
int main() {
    int donut, milk, pencil, eraser;
    double dpg, ppe; //donut per gallon, pencil per eraser
    cout<<"donuts?\n";
    cin>>donut;
    cout<<"milk?\n";
    cin>>milk;
    dpg = donut/static_cast<double>(milk);
    if(milk<=0)
    {
        cout<<"I can't from if statement for "<<donut<<endl;
    }else {
        cout << dpg << endl;
    }

    try{
        if(milk<=0)
            throw donut; //that something has a data type
    }catch(int e){ //here I need to have which can match the data type of the object i'm throwing
        cout<<"THere are "<<e<<" donuts, but no milk it seems"<<endl;
    }

    try{
        if(milk<=0)
            throw NoMilk(donut); //that something has a data type
            //like return anything after this line will be skipped, not executed if thrown

            cout<<"this is the statement in the try block"<<endl;
    }catch(NoMilk e){ //here I need to have which can match the data type of the object i'm throwing
        cout<<"THere are "<<e.getCount()<<" donuts, but no milk it seems from exception class"<<endl;
    }

    cout<<"wha tbout pencils\n";
    cin>>pencil; //negative number or 0
    cout<<"eraser?\n";
    cin>>eraser; //zero
    try{
        if (pencil<0)
            throw NegativeNumber("pencil");
        if(eraser<0)
            throw NegativeNumber("eraser");
        if(eraser==0)
            throw DividebyZero();
        ppe=pencil/static_cast<double>(eraser);
        cout<<ppe<<" is for pencils and erasers"<<endl;
    }catch(NegativeNumber e){
          cout<<e.getMessage()<<" can't be negative"<<endl;
    }catch(DividebyZero e){
          cout<<" don't make the mistake of dividing by zero"<<endl;
    }
    std::cout << "Hello, World!" << std::endl;

    return 0;
}
