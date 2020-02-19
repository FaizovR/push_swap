#include "../includes/push_swap.h"

void ft_insert_sort(t_stack *stackes)
{
    while (ft_lst_size(stackes->stack_a) > 3)
        ft_instruction(&stackes->stack_a, &stackes->stack_b, "pb");
    ft_sort(stackes);
}


void ft_sort(t_stack *stackes)
{
    if (ft_lst_size(stackes->stack_a) <= 3)
        ft_sort_3(stackes);
    else if (ft_lst_size(stackes->stack_a) <= 5)
        ft_sort_5(stackes);
    else
        ft_insert_sort(stackes);
}