cmake_minimum_required(VERSION 3.31 FATAL_ERROR)
project(Laba3)

add_executable(Laba3 src/manual_leak.cpp src/raii_example.cpp src/shared_ptr.cpp src/unique_ptr.cpp src/weak_ptr.cpp)
