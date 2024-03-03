//
// Created by GW on 2024/3/1.
//
#include "function obiect.h"
namespace FunctionObiect {



    class Hard_Task {
    public:
        void operator()() const {
            std::cout << "hhhh" << std::endl;
        }
    };
void TeatThread() {

    //std::thread t(Hard_Task());
    // this is a not wise Writing method which will be complice to intrept a function


    std::thread t{Hard_Task()};
    t.join();


}
}
