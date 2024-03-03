cmake_minimum_required(VERSION 3.27)
project(C__11_multiThreadCode)

set(CMAKE_CXX_STANDARD 17)

add_executable(C__11_multiThreadCode main.cpp
        "chapter02/base thread manage/function object.cpp"
        "chapter02/base thread manage/function obiect.h"
        chapter02/ThreadRALL/ThreadRall.h
        chapter02/ThreadRALL/Thread_num.h
        chapter02/parallel_alogrithm/parallel_accumulate.h
        chapter02/ThreadId/ThreadID.h
        chapter03/use_mutex.h)
