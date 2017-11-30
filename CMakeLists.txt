cmake_minimum_required(VERSION 3.8)
project(CLionDemo2017_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(CLionDemo2017_3 main.cpp)

add_subdirectory(cpp_support)
add_subdirectory(valgrind_memcheck)
add_subdirectory(boost_test)