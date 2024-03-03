#include "Movie.h"
#include<iostream>
using namespace std;

Movie::Movie()
{
    //ctor
}

Movie::~Movie()
{
    //dtor
}


void Movie::print()
{
    cout<<title<<" "<<year<<endl;
}

bool Movie::operator>(Movie &mobj)
{
    return year>mobj.year;
}

void Movie::setYear(int yr)
{
    year = yr;
}

int Movie::getYear()
{
    return year;
}
