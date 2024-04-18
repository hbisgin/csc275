#include <iostream>
#include <set> //compare, internal comparison
#include<map> // this is like Hash, it will take a key and you can associate value with it.
#include "Hash.h"
using namespace std;


int main() {
    Hash myHash;
    set<string> mySet;
    map<string, int>grades; //it will take a string as a key, and store a value of an integer
    std::cout << "Hello, World!" << std::endl;
    //cout<<computeHash("dog")<<endl;
    //string temp = "dog";
    myHash.put("cat");
    myHash.put("dog");
    myHash.put("bird");
    myHash.put("turtle");
    myHash.put("elephant");
    myHash.displayHash();

    mySet.insert("Adam");
    mySet.insert("Eve");
    pair<set<string>::iterator, bool> ret; //pair is a data structe, which combines two things in a bundle
    ret = mySet.insert("Mary"); //returning pair
    cout<<*(ret.first)<<" "<<ret.second<<endl;
    ret = mySet.insert("Mary");
    cout<<*(ret.first)<<" "<<ret.second<<endl;
    set<string>::iterator sit; //set iterator for string variables contained

    for(sit=mySet.begin(); sit!=mySet.end(); sit++)
    {
        cout<<*sit<<endl;
    }
   //let's experiment map
    grades["Matt"] = 90;
    grades["Dan"] = 100;
    grades["Sue"] = 95;
    string names[] = {"Matt", "Dan", "Sue"};
    for(int i=0;i<3;i++)
    {
        cout<<grades[ names[i] ]<<endl;
    }

    map<string, int>::iterator mit; //map iterator
    for(mit=grades.begin(); mit!=grades.end(); mit++)
    {
        cout<<mit->first<<" "<<mit->second<<endl;
    }
    return 0;
}
