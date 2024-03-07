//
// Created by halil on 3/7/2024.
//

#include "Fruit.h"

Fruit::Fruit():name("banana"), price(.59){}
Fruit::Fruit(string fname, float fp):name(fname), price(fp){}
float Fruit::getPrice() const {return price;}
bool Fruit::operator!=(Fruit const &rhs)
{
    return price!=rhs.price;
}
bool operator<(Fruit const &lhs, Fruit const &rhs)
{
    return lhs.price<rhs.price;
}



