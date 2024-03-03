#include<iostream>

#include "Vec.h"

using namespace std;

namespace bisgin{

Vector::Vector():x(0), y(0){cout<<"you created "<<count<<" vector(s) from namespace"<<endl; count++;}

Vector::Vector(int xx, int yy):x(xx), y(yy){cout<<"you created "<<count<<" vector(s) from namespace"<<endl; count++;}

const Vector Vector::operator + ( const Vector &v2) const
{
    int xlocal, ylocal;
    xlocal = x + v2.getX();
    ylocal = y + v2.getY();
    return Vector(xlocal, ylocal);
}

const Vector operator - (const Vector &v1, const Vector &v2)
{
    int xlocal, ylocal;
    xlocal = v1.getX() - v2.getX();
    ylocal = v1.getY() - v2.getY();
    return Vector(xlocal, ylocal);
}

const Vector operator - (const Vector &v1)
{
    return Vector(-v1.getX(), -v1.getY());
}

void Vector::display() const {
    cout<<x<<" " <<y<<endl;

}

};
