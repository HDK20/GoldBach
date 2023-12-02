cmake_minimum_required(VERSION 3.25)
project(Goldbach C)

set(CMAKE_C_STANDARD 17)

add_executable(Goldbach main.c Calculator1.h)
add_executable(GEN1 Generator1.c)
add_executable(GEN2 Generator2.c)
add_executable(GEN3 Generator3.c)
add_executable(GEN4 Generator4.c)
add_executable(RUN ../answer.c)


