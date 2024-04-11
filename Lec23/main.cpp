#include <iostream>
#include <fstream>
#include "Queue.h"
#include<deque>

using namespace std;

int main() {
    Queue<string> sQ;//string queue
    Queue<string>presidents;
    deque<int> iQ;
    iQ.push_back(3);

    cout<<iQ[0]<<endl;

    string who;
    sQ.push("adam");
    sQ.push("eve");
    std::cout << "Hello, World!" << std::endl;
    sQ.display();
    //who = presidents.pop();
    who = sQ.pop();
    cout<<who<<" has been removed and the followings are left"<<endl;
    sQ.display();

    ifstream file("C:\\CPPFiles\\Winter24\\Lec23\\presidentsWstates-1.txt");
    string line;
    if (file.is_open())
    {
        while (getline(file, line))
        {
            //stringstream ss(line); //include<sstream>
            //getline(ss, temp.fullname, '\t');
            //getline(ss, temp.state, '\t');
            //use push for your queue to insert president Profiles.
            //use push_front for your deque to insert president Profiles
            //cout<<line<<endl;
            presidents.push(line);

        }
    }else{
        cout<<"can't find the file"<<endl;
    }

    cout<<"below are from the presidents Queue"<<endl;
    presidents.display();
    presidents.push("Joseph Robinette Biden DE");
    cout<<"below are from the presidents Queue for 2024"<<endl;
    presidents.display();
    return 0;
}
