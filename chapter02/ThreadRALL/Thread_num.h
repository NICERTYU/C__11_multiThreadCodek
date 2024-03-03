//
// Created by GW on 2024/3/3.
//

#ifndef C__11_MULTITHREADCODE_THREAD_NUM_H
#define C__11_MULTITHREADCODE_THREAD_NUM_H
#include <iostream>
#include <thread>
void Test_Thread_num() {
    std::cout << std::thread::hardware_concurrency;
}
#endif //C__11_MULTITHREADCODE_THREAD_NUM_H
