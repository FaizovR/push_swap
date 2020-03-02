#include "../includes/push_swap.h"

void ft_handle_error()
{
	ft_putstr("Error\n");
	exit(0);
}

void ft_handle_error_lst(t_list *stack_a, t_list *stack_b)
{
	ft_lstdel(&stack_a, &del);
	ft_lstdel(&stack_b, &del);
	ft_putstr("Error\n");
	exit(0);
}

