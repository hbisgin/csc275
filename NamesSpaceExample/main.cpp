#include <iostream>
#include "Point.h"
#include "namespaceList.h"

using namespace Justin;
using Peter::doSomething;
int main() {
    Point p;
    p.fake();
    std::cout << "Hello, World!" << std::endl;
    doNothing();
    //doSomething();
    return 0;
}
