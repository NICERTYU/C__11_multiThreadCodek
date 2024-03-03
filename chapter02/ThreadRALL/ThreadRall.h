//
// Created by GW on 2024/3/1.
//

#ifndef C__11_MULTITHREADCODE_THREADRALL_H
#define C__11_MULTITHREADCODE_THREADRALL_H
#include<thread>
namespace ThreadRall {
    class Threadguard {
        std::thread &t;
    public:
        explicit Threadguard(std::thread& _t) : t(_t) {

        }

        ~Threadguard() {
            if (t.joinable()) {
                t.join();
            }
        }

        Threadguard(const Threadguard& ) = delete;
        Threadguard& operator= (const Threadguard&) = delete;

    };
}
#endif //C__11_MULTITHREADCODE_THREADRALL_H
