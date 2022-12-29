cmake_minimum_required(VERSION 3.23)
project(NotTheMenu C)

set(CMAKE_C_STANDARD 99)

add_executable(NotTheMenu main.c not_the_main.c not_the_main.h)
