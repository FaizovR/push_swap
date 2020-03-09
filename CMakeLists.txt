cmake_minimum_required(VERSION 3.15)
project(push_swap)

add_compile_options(-Wall -Wextra -Werror -g)
set(CMAKE_C_STANDARD 99)

include_directories(
        includes
        libft/
)

link_directories(push_swap
        libft)

link_directories(checker
        libft)

add_executable(push_swap
        sources/push_swap.c
        sources/parser.c
        sources/operators.c
        sources/handle_errors.c
        sources/instructions.c
        sources/ft_max_in_lst.c
        sources/ft_min_in_lst.c
        sources/ft_lst_size.c
        sources/sort3_5.c
        sources/ft_sort.c
        sources/ft_sort_helper.c
        sources/positions.c
        sources/validation.c
        sources/rolling.c
        sources/add_to_stack.c
        sources/ft_clear_stack.c)

target_link_libraries(push_swap
        "ft"
        )


add_executable(checker
        sources/checker.c
        sources/parser.c
        sources/operators.c
        sources/handle_errors.c
        sources/instructions.c
        sources/ft_max_in_lst.c
        sources/ft_min_in_lst.c
        sources/ft_lst_size.c
        sources/sort3_5.c
        sources/ft_sort.c
        sources/ft_sort_helper.c
        sources/positions.c
        sources/rolling.c
        sources/validation.c
        sources/visual.c
        sources/draw_utils.c
        sources/draw_utils2.c
        sources/draw_utils3.c
        sources/ft_reverse_list.c
        sources/add_to_stack.c
        sources/ft_clear_stack.c)


target_link_libraries(checker
        "ft"
        "mlx"
        "-framework OpenGL"
        "-framework AppKit"
        )