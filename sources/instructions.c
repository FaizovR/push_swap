#include "../includes/push_swap.h"

void	ft_instruction(t_list **stack_a, t_list **stack_b, char *name)
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

void	ft_instruction_checker(t_list **stack_a, t_list **stack_b, char *name)
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
	else
		ft_handle_error_lst(*stack_a, *stack_b);
}

void	is_oper(t_stack *stacks, char *name)
{
	if (ft_strcmp(name, "sa") && ft_strcmp(name, "pa") && ft_strcmp(name, "ra")
	&& ft_strcmp(name, "rra") && ft_strcmp(name, "sb") && ft_strcmp(name, "pb")
	&& ft_strcmp(name, "rb") && ft_strcmp(name, "rrb") && ft_strcmp(name, "ss")
	&& ft_strcmp(name, "rr") && ft_strcmp(name, "rrr"))
		ft_handle_error_lst(stacks->stack_a, stacks->stack_b);
}
