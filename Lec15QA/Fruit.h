//
// Created by halil on 3/7/2024.
//

#ifndef LEC15QA_FRUIT_H
#define LEC15QA_FRUIT_H
#include<iostream>

using std::string;

class Fruit {
public:
    Fruit();
    Fruit(string fname, float fp);
    float getPrice()const;
    bool operator!=(Fruit const &rhs); //member overloaded with one less parameter
    friend bool operator<(Fruit const &lhs, Fruit const &rhs);//friend should be in public here
    private:
    string name;
    float price;

};



#endif //LEC15QA_FRUIT_H
