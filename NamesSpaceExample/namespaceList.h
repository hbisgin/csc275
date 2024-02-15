//
// Created by Halil Bisgin on 2/15/24.
//

#ifndef NAMESSPACEEXAMPLE_NAMESPACELIST_H
#define NAMESSPACEEXAMPLE_NAMESPACELIST_H
#include <iostream>
namespace Justin{
    void doNothing(){
        std::cout<<"Justin Doing Nothing"<<std::endl;
    }
}

namespace Peter{
    void doNothing(){
        std::cout<<"Peter doing nothing"<<std::endl;
    }

    void doSomething(){
        std::cout<<"Peter doing something"<<std::endl;
    }
}
#endif //NAMESSPACEEXAMPLE_NAMESPACELIST_H
