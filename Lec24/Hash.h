//
// Created by halil on 4/9/2024.
//

#ifndef LEC24_HASH_H
#define LEC24_HASH_H
#include<iostream>
#include "listtoolshb.h"
#include "listtoolshb.cpp"
using std::string;

const int SIZE=10;
class Hash {
public:
    Hash();
    void put(string element);
    void displayHash();
private:
    Node<string> *hashArray[SIZE];
    int computeHash(string element);
};


#endif //LEC24_HASH_H
