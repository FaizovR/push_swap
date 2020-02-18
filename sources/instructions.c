#include "../includes/push_swap.h"

void		ft_instruction(t_list **stack_a, t_list **stack_b, char *name)
{
	if (!ft_strcmp(name, "sa"))
		operation_swap(stack_a);
	else if (!ft_strcmp(name, "pa"))
		operation_push(stack_a, stack_b);
	else if (!ft_strcmp(name, "ra"))
		operation_rotate(stack_a);
	else if (!ft_strcmp(name, "rra"))
		operation_reverse_rotate(stack_a);
	else if (!ft_strcmp(name, "sb"))
		operation_swap(stack_b);
	else if (!ft_strcmp(name, "pb"))
		operation_push(stack_b, stack_a);
	else if (!ft_strcmp(name, "rb"))
		operation_rotate(stack_b);
	else if (!ft_strcmp(name, "rrb"))
		operation_reverse_rotate(stack_b);
	else if (!ft_strcmp(name, "ss"))
		double_operation(stack_a, stack_b, operation_swap);
	else if (!ft_strcmp(name, "rr"))
		double_operation(stack_a, stack_b, operation_rotate);
	else if (!ft_strcmp(name, "rrr"))
		double_operation(stack_a, stack_b, operation_reverse_rotate);
	ft_putstr(name);
	ft_putchar('\n');
}