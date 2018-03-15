cmake_minimum_required(VERSION 3.9)
project(killbot9000)

set(CMAKE_CXX_STANDARD 11)

add_executable(killbot9000 main.cpp StateMachine.cpp StateMachine.h)