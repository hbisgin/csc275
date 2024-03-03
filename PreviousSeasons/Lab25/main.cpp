#include <iostream>
#include<string>

using namespace std;

class User{
public:
    User(){}
    User(string iname, int iage):name(iname),age(iage){}
    int getAge(){return age;}
    string getName(){return name;}
    private:
        string name;
        int age;

};

int main()
{
    string name;
     int age;
    cout << "Hello world! give me your name and age" << endl;
    cin>>name>>age;

    try{
        if(age<18)
            throw User(name,age);
    }catch(User e){

        cout<<e.getAge()<<" is less than 18"<<endl;
    }

    try{
        if(name.size()<3)
            throw User(name,age);
    }catch(User e){

        cout<<e.getName()<<" is less than 3 characters"<<endl;
    }

    try{
        if(name.size()<3 || age<18)
            throw User(name,age);
    }catch(User e){

        cout<<" either your name is less than 3 characters or bbb b "<<endl;
    }


    try{
        if(age==18)
            throw User(name,age);
    }catch(...){

        cout<<"i have no idea why uou are here"<<endl;
    }



    return 0;
}
