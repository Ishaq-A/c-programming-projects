cmake_minimum_required(VERSION 3.19)
project(Help C)

set(CMAKE_C_STANDARD 11)

add_executable(Help main.c other.h other.c)