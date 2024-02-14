#include <iostream>
using namespace std;

class Array{
public:
    //Array():size(2), used(0){a = new int[size];}
    Array(int size=2){this->size = size; this->used=0; a = new int[size];}
    Array(const Array & aObj); //copy constructor doesn't return anything
    ~Array();
    Array & operator=(Array &aObj);
    int getSize()const{return size;}
    int getUsed()const{return used;}
    //return by reference, because you want to assign values to the address returned
    int & operator[](int index){return a[index];}//inline
    bool addElement(int element);
private:
    int size; //capacity
    int used; //thie is the used portion of the array
    int *a; //this is the backbone of this class because it's responsible for the array
};

Array::Array(const Array &aObj)
{
    cout<<"copy constructor is being called here"<<endl;
    size = aObj.getSize(); //copying size aobj.size
    used = aObj.getUsed();
    a = new int[size];//this is a different memory space
    //p1 = p2; //avoid this here
    //*p2 = 83;
    //cout<<p1<<endl;
    for (int i=0; i<used; i++)
    {
        a[i] = aObj.a[i];
    }
}

Array & Array::operator=(Array &aObj){
    cout<<"overloded assignment operator is being calle here!"<<endl;
    if(this == &aObj)
    {
        return *this;
    }else{
        size  = aObj.size;
        used = aObj.used;
        delete [] a;
        a = new int[size];
        for(int i=0; i<used; i++)
        {
            a[i] = aObj.a[i];
        }
        return *this;
    }
}
Array::~Array()
{
    cout<<"destructor is being called"<<endl;
    delete [] a;
}
void doNothing(Array Obj)
{//it creates a local copy since I'm passing by value
    cout<<"This function does nothing"<<endl;
    //once ths  function is over, object is destroyed. This implioes destructor clled
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    int array[5] = {1, 2,3,4,5};
    Array obj, obj2(10);
    doNothing(obj);
    for (int i=0; i<obj2.getSize(); i++)
        obj2.addElement(50*i);

    for(int i=0; i<obj2.getUsed(); i++)
        cout<<obj2[i]<<endl;

    obj.addElement(5);
    obj[0] = 100; //if  return by reference is on the LHS, you're assigning
    obj.addElement(6);
    for (int i=0; i<obj.getUsed(); i++){
        cout<<obj[i]<<endl; //need an overloaded operator for [ ]!
        //if return by reference is on the RHS or inside a cout statement,
        //you're retrieving the value
        //
    }
    obj = obj2; //this will call your overloaded assignment operator
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