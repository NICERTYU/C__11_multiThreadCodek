//
// Created by GW on 2024/3/3.
//

#ifndef C__11_MULTITHREADCODE_THREADID_H
#define C__11_MULTITHREADCODE_THREADID_H
#include <thread>
#include <iostream>
//The Thread Id is the only identifier of a thread;
//the thread id of main thread is 1;
namespace  Identifier {
    void Test_the_Thread_id() {
        std::cout << std::this_thread::get_id<< std::endl;
    }

}
#endif //C__11_MULTITHREADCODE_THREADID_H
