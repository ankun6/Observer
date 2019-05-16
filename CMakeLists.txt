cmake_minimum_required(VERSION 3.12)
project(Observer C)

set(CMAKE_C_STANDARD 99)

add_executable(Observer main.c Observer.c Subject.c List.h)