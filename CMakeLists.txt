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
        sources/parser.c
        sources/operators.c
        sources/handle_errors.c
        sources/sort_algorithm.c
        sources/instructions.c
        sources/ft_max_in_list.c
        sources/ft_min_in_lst.c
        sources/sort_3_or_5.c
        sources/ft_sort.c
        )

target_link_libraries(push_swap ${CMAKE_SOURCE_DIR}/libft/libft.a)