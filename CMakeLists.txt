cmake_minimum_required(VERSION 4.2)
project(Logic_circit_2 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Logic_circit_2
        main.c
        Common.h
        input_handle.c
        Control_Flow.c
)
