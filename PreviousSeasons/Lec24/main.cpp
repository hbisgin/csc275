#include <iostream>
#include<string>
#include<set>
#include<map>

using namespace std; //using std::set, using std::map
const int SIZE=10;
int myhash(string s);

int main()
{
    set<int>myset;
    set<int>::iterator sit; //set iterator for int values
    pair<set<int>::iterator, bool> ret;

    map<char,int> mymap;
    map<char, int>::iterator mit;
    pair<map<char,int>::iterator, bool> retmap;

    pair<char,int> temp('a', 100);
    mymap.insert(temp);

    mymap.insert(pair<char,int>('z', 150));
    mymap.insert(pair<char,int>('c', 200));
    mymap.insert(pair<char,int>('t', 300));

    mymap['h'] = 40;

    for(mit=mymap.begin(); mit!=mymap.end(); mit++)
        cout<<mit->first<<" "<<mit->second<<endl;

    cout<<"for k: "<<mymap['k']<<endl;

    retmap = mymap.insert(temp);
    if(retmap.second==false)
        cout<<"this key exists with the following value: "<<retmap.first->second<<endl;

    //cout<<mymap['c']<<endl; suppose c is a key for your scores 70

    for(int i=0; i<=5; i++)
        myset.insert(i*10);

    ret = myset.insert(10); //this returns such a pair we defined above
    if(ret.second==false)
        cout<<*(ret.first)<<" exists"<<endl;


    for(sit = myset.begin(); sit!=myset.end(); sit++)
        cout<<*sit<<endl;


    string names[10];
    cout << "Hello world!" << endl;
    string input="chris";
    names[myhash(input)] = input;
    cout<<myhash(input)<<endl;
    cout<<names[myhash(input)]<<endl;
    return 0;
}


int myhash(string s)
{
    int hash=0;
    for(int i=0; i<s.size(); i++)
        hash = hash + s[i];

    return hash%SIZE;
}
