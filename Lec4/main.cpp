#include <iostream>
using namespace std;

class Fruit{
public:
    void setName(string fname);
    void setPrice(float fprice);
    void setWeight(float fweight);
    float getTotalCost();
    string getName(){return name;} //inline them
    float getPrice(){return price;}
    float getWeight(){return weight;}
private:
    string name;
    float price;
    float weight;
    float total_cost;
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    string fname;
    float fprice, fweight; //variable scope, a variable is only visible to its surrounding environemnt unless it i a global variable
    Fruit fruit1, fruit2, fruit3; //Three Fruit objects which share the same features
    fruit1.setName("apple");
    fruit1.setPrice(2.99);
    fruit1.setWeight(1.5);
    cout<<"for the  fruit "<<fruit1.getName()<<"The price is "<<fruit1.getPrice()<<endl;
    cout<<"The weight is "<<fruit1.getWeight()<<endl;
    cout<<"The total cost is: "<<fruit1.getTotalCost()<<endl;
    cout<<"Which fruit are you gonna buy?"<<endl;
    cin>>fname;
    fruit2.setName(fname);
    cout<<"How much is it?"<<endl;
    cin>>fprice;
    fruit2.setPrice(fprice);
    cout<<"Then how many pounds?"<<endl;
    cin>>fweight;
    fruit2.setWeight(fweight);
    cout<<"then the total cost is "<<fruit2.getTotalCost()<<endl;
    return 0;
}

void Fruit::setName(string fname)
{
    name = fname;
}

void Fruit::setPrice(float fprice)
{
    price = fprice;
}
void Fruit::setWeight(float fweight)
{
    weight = fweight;
}
float Fruit::getTotalCost()
{
    total_cost = price*weight;
    return total_cost;
}

