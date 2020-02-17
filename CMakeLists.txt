cmake_minimum_required(VERSION 3.15)
project(push_swap)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")
set(CMAKE_C_STANDARD 99)

file (GLOB PUSH_SWAP
        sources/*.c
        includes/*.h
        )

add_executable(push_swap
        sources/ps.c
        )
