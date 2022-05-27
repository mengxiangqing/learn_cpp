cmake_minimum_required(VERSION 3.22)
project(clion)

set(CMAKE_CXX_STANDARD 17)

add_executable(clion TicketMachine.cpp TicketMachine.h main.cpp)
