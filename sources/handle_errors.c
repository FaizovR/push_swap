#include "../includes/push_swap.h"

void ft_handle_error()
{
	ft_putstr("Error\n");
	exit(0);
}

void ft_handle_error_lst(t_list *stack_a, t_list *stack_b)
{
	(stack_a) ? ft_clear_stack(stack_a) : 0;
	(stack_b) ? ft_clear_stack(stack_b) : 0;
	ft_putstr("Error\n");
	exit(0);
}

