#include <iostream>
#include"Lab17.h"
#include<string>
using namespace std;

struct Profile
{
    int id;
    string name;
};

bool operator==(Profile p1, Profile p2){return p1.name==p2.name;}

int main()
{
    int arr[10] = {4, 67, 234, 24, 95, 45, 35, 59, 60, 294};
    double a[ 10 ] = {3.5,34.6,234.98, 4.6,7.9,2.3,4.1,5.6,0.985,4.009};
    //string s[ 10 ] = {"Halil", "UM-flint", "third", "4th", "is", "are", "?", "88", "CSC275", "csep"};
    Profile list[10];
    string names[10] = {"Adam", "Eve", "John", "Daniel", "Kate", "Sue", "Nicole", "Nick", "Chris","Sam"};
    string key = "Adam";

    cout<<linearsearch(arr, 10, 294)<<endl;
    cout<<linearsearch(a, 10, 3.5)<<endl;
    cout<<linearsearch(names, 10, key)<<endl;

    for(int i=0; i<10; i++)
        if(names[i]=="Adam")
            cout<<"found";

    for(int i=0; i<10; i++)
    {
        list[i].id = i;
        list[i].name = names[i];
    }

    Profile temp ={0, "Adam"};
    cout<<linearsearch(list, 10, temp)<<endl;

    return 0;
}
