#include <iostream>

using namespace std;
void myfun()
{
    string message="hi";
    if(message=="hi")
        throw message;
}

void throwFun(string message) throw(string, int)
{
    if(message=="hi")
        throw message;
    if(message=="hello")
        throw 100;
}


int main()
{
    string input;
    cout << "Hello world! Tell me something" << endl;
    cin>>input;

    try{
        throwFun(input);
    }catch(string e){
        cout<<"I already said hello why do you say "<<e<<endl;
    }catch(int e){
        cout<<"you said hello I guess with "<<e<<endl;
    }


    try{
        myfun();
    }catch(string e){
        cout<<"said "<<e<<endl;
    }


    try{
        myfun();
    }catch(...){  //default catch
        cout<<"said unknown"<<endl;
    }
    return 0;
}
