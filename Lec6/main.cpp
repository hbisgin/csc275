#include <iostream>
using namespace std;

class Box{
public:
    Box():width(1), length(1), depth(1){boxCount++;}
    Box(float w):width(w), length(1), depth(1){boxCount++;}
    Box(float w, float l):width(w), length(l), depth(1){boxCount++;}
    Box(float w, float l, float d);
    void setWidth(float w);//mutators
    void setLength(float l);
    void setDepth(float d);
    float getWidth() const {int dummy =0; return width;}//accessors
    float getLength() const {return length;}
    float getDepth() const {return depth;}
    static int getCount(){return boxCount;}
    //const identifiers prevent you from changing the values of data members
private:
    float width;
    float length;
    float depth;
    static int boxCount;
};
int inline square(const int &a){ //let's you promise you are not going to change and want to save memory
    //pass by reference along with the const identifier
    return a*a;
}

int Box::boxCount = 0; //initialization

int main() {
    std::cout << "Hello, World!" << std::endl;
    int num = 4;
    cout<<square(4)<<endl; //return a*a;, your compile will assume that this is the part of your code.
    Box box1, box2(3), box3(3,4), box4(5,6,7);
    cout<<"Box count is "<<Box::getCount()<<endl;
    cout<<box1.getWidth()<<" "<<box2.getWidth()<<" ";
    cout<<box3.getWidth()<<" "<<box4.getWidth()<<endl;
    cout<<box1.getCount()<<" "<<box2.getCount()<<" "<<box3.getCount()<<" "<<box4.getCount()<<endl;
    return 0;
}

Box::Box(float w, float l, float d)
{
    width = w;
    length = l;
    depth =d;
    boxCount++;
}

void Box::setWidth(float w) {width = w;}
void Box::setLength(float l) {length = l;}
void Box::setDepth(float d) {depth = d;}