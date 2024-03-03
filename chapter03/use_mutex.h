//
// Created by GW on 2024/3/3.
//

#ifndef C__11_MULTITHREADCODE_USE_MUTEX_H
#define C__11_MULTITHREADCODE_USE_MUTEX_H
#include <mutex>
#include <list>
namespace  use_mutex {
std::list<int> some_list;
std::mutex some_mutex;

void add_to_list(int new_value) {
    std::lock_guard<std::mutex> guard(some_mutex) ;
    some_list.push_back(new_value);
}

bool list_contains(int value_to_find) {
    std::lock_guard<std::mutex> guard(some_mutex) ;
    return std::find(some_list.begin(), some_list.end(), value_to_find) != some_list.end();
}

}
#endif //C__11_MULTITHREADCODE_USE_MUTEX_H
