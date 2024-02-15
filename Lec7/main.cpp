#include <iostream>
using namespace std;

class Vector{

public:
    Vector():x(0), y(0){}
    Vector(float xx):x(xx), y(0){}
    Vector(float xx, float yy):x(xx), y(yy){}
    float getX()const{return x;}
    float getY()const{return y;}
    void setX(float xx){x=xx;}
    void display() const {cout<<x<<" "<<y<<endl;}
    friend const Vector operator + (Vector const &v1, Vector const &v2);
    Vector operator -(); //it's a member function
    Vector operator - (Vector const &v2){ //first parameter will be here.
        float xx = x - v2.getX();
        float yy = y - v2.getY();
        return Vector(xx,yy);

    }

//The operator below expects three parameters, therefore you will encounter an error
/*
    bool  operator == (Vector &v1, Vector &v2)
  { 
	if (v1.getX()==v2.getX() && v1.getX()==v2.getX())
		return true;
	else
		return false;
  }
*/
private:
    float x, y;

};
//when you write a member fuction/overloaded operator, you skip the first parameter.
//You deduct one parameter.
const Vector operator + (Vector const &v1, Vector const &v2){
    //float xx = v1.getX() + v2.getX();
    //float yy = v1.getY() + v2.getY();
    float xx = v1.x + v2.x;
    float yy = v1.y + v2.y;
    return Vector(xx, yy);
}

Vector Vector::operator-() {
    return Vector(-x, -y);
}

/*
int foo(int a, float b)
{
    return pow(b,a);
}
 */

class Fruit{
public:
    Fruit():name("babana"), price(0){}
    Fruit(string fname, float fprice):name(fname), price(fprice){}
    float getPrice() const {return price;}
private:
    string name; //std::string
    float price;
};

bool operator>(Fruit const &f1, Fruit const &f2){
    if (f1.getPrice()>f2.getPrice())
        return true;
    else
        return false;
}

//you can have objects for your return values.
//you should also consider having const for your return type
//if you are returning an object.
int main() {
    std::cout << "Hello, World!" << std::endl;
    Vector vector1(3,5), vector2(-1,4);

    Vector vector3 = vector1+vector2; //+ sign will trigger the (function) call
    Vector vector4 = vector1 - vector2;
    Vector vector5 = vector1 + 3; //because I have a constructor which takes only one parameter which was x.
    Vector vector6 = vector1 - 3;
    Vector vector7 = -vector1;
    vector7.display();
    vector5.display();
    vector3.display();
    vector4.display();
    (vector1+vector2).display(); //return type has a const identifier. Thatis why you can only call const functions
    //for the result of this operation.
    //(vector1+vector2).setX(100);
    Fruit fruit1("apple", 1.49), fruit2("orange", 1.99);
    Fruit fruit3;//if you don't have default constructor you can't do this!

    if(fruit2>fruit1){
        cout<<"orange is more expensive";
    }
    return 0;
}
