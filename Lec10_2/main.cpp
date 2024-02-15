#include <iostream>
using namespace std;

class Array{
public:
    //Array():size(2), used(0){a = new int[size];}
    Array(int size=2){this->size = size; this->used=0; a = new int[size];}
    int getSize()const{return size;}
    int getUsed()const{return used;}
    //return by reference, because you want to assign values to the address returned
    int & operator[](int index){return a[index];}//inline
    bool addElement(int element);
private:
    int size; //capacity
    int used; //thie is the used portion of the array
    int *a; //this is the backbone of this class because it's responsoble for the array
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    int array[5] = {1, 2,3,4,5};
    Array obj, obj2(10);
    for (int i=0; i<obj2.getSize(); i++)
        obj2.addElement(50*i);

    for(int i=0; i<obj2.getUsed(); i++)
        cout<<obj2[i]<<endl;

    obj.addElement(5);
    obj[0] = 100; //if  return by reference is on the LHS, you're assigning
    obj.addElement(6);
    for (int i=0; i<obj.getUsed(); i++)
        cout<<obj[i]<<endl; //need an overloaded operator for [ ]!
        //if return by reference is on the RHS or inside a cout statement,
        //you're retrieving the value
    return 0;
}

bool Array::addElement(int element) {
    if (used==size)
    {
        return false;
    }
    a[used] = element; //fill array through used
    used++; //bookkeeper
    return true;
}