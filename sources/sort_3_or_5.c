#include "../includes/push_swap.h"

void	ft_sort_3(t_stack *stacks)
{
	int	lst_size;

	lst_size = ft_lst_size(stacks->stack_a);
	stacks->max = ft_max_in_lst(stacks->stack_a);
	stacks->min = ft_min_in_lst(stacks->stack_a);
	if (lst_size == 1)
		exit(0);
	else if (lst_size == 2)
	{
		if (*(int *)stacks->stack_a->content >
		*(int *)stacks->stack_a->next->content)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "sa");
		return ;
	}
	else if (lst_size == 3)
	{
		if (*(int *)stacks->stack_a->content == stacks->max)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
		if (*(int *)stacks->stack_a->next->content == stacks->max)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "rra");
		if (*(int *)stacks->stack_a->content >
		*(int *)stacks->stack_a->next->content)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "sa");
	}
}

int		ft_is_sorted(t_list *begin_list)
{
	while (begin_list != NULL && begin_list->next != NULL)
	{
		if (*(int *)begin_list->content > *(int *)begin_list->next->content)
			return (0);
		begin_list = begin_list->next;
	}
	return (1);
}

void	ft_sort_5(t_stack *stacks)
{
	if (ft_is_sorted(stacks->stack_a))
		return ;
	stacks->max = ft_max_in_lst(stacks->stack_a);
	stacks->min = ft_min_in_lst(stacks->stack_a);
	while (ft_lst_size(stacks->stack_b) < 2)
	{
		if (*(int *)stacks->stack_a->content == stacks->min
		|| *(int *)stacks->stack_a->content == stacks->max)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "pb");
		else
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
	}
	ft_sort_3(stacks);
	ft_instruction(&stacks->stack_a, &stacks->stack_b, "pa");
	ft_instruction(&stacks->stack_a, &stacks->stack_b, "pa");
	if (*(int *)stacks->stack_a->content == stacks->max)
		ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
	else
	{
		ft_instruction(&stacks->stack_a, &stacks->stack_b, "sa");
		ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
	}
}
