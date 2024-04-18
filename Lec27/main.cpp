#include <iostream>
#define NDEBUG  //this can be DEBUG or NDEBUG. This has to come before #include <cassert>
#include <cassert> //this library is for assert macro
#include<fstream>
//#include "Fruit.h"
//#include "Fruit.h"
const int MAXFOLLOWERS=100;
#define PI 3.14
#define CIRCLE_AREA(x) (PI*(x)*(x))  //pi*r^2, macro
using namespace std;

class Pair{
	public:
		Pair(){}
		Pair(int x_, int y_):x(x_), y(y_){}
		int getX()const{return x;}
		int gety()const{return y;}
	private:
		int x, y;

};

class FileIOError{
	public:
	FileIOError(){}
	FileIOError(string theMessage):message(theMessage){}
	private:
	string message;
};

int main(int argc, char *argv[]) //argc is for argument count, argv is a pointer array for character arrays.
{
    int x = 3;
    cout << "Hello world! PI is "<<PI << endl;
    cout<<"Area for r=2 "<<CIRCLE_AREA(2)<<endl;
    cout<<"__LINE__ "<<__LINE__<<endl;
    cout<<"__FILE__ "<<__FILE__<<endl;
    cout<<"__TIME__ "<<__TIME__ <<endl;
    cout<<"__DATE__ "<<__DATE__ <<endl;
    //cout<<"__cpluplus__ "<<__c<<endl;
    assert(x==4); // x is not 4, you should expect the program to terminate itself.

    for(int i=0; i<4; i++) //this will assume I will provide 3 parameters. However, the 0 index will have the exe file name
        cout<<argv[i]<<endl; //these are still character arrays or strings, you cna't treat them as numbers unless you cast them

    int *ptr = new int[stoi(argv[1])]; //dynamic memory allocation
    ptr[0]=1000;
    cout<<ptr[0]<<endl;

    return 0;
}
