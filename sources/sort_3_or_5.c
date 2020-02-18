#include "../includes/push_swap.h"



void ft_sort_3(t_stack *stackes)
{
	int max;

	max = ft_max_in_lst(stackes->stack_a);
	if (ft_lst_size(stackes->stack_a) == 1)
		exit(0);
	else if (ft_lst_size(stackes->stack_a) == 2)
	{
		if (*(int *) stackes->stack_a->content > *(int *) stackes->stack_a->next->content)
			ft_instruction(&stackes->stack_a, &stackes->stack_b, "sa");
		return;
	} else if (ft_lst_size(stackes->stack_a) == 3)
	{
		if (*(int *)stackes->stack_a->content == max)
			ft_instruction(&stackes->stack_a, &stackes->stack_b, "ra");
		if (*(int *)stackes->stack_a->next->content == max)
			ft_instruction(&stackes->stack_a, &stackes->stack_b, "rra");
		if (*(int *)stackes->stack_a->content > *(int *)stackes->stack_a->next->content)
			ft_instruction(&stackes->stack_a, &stackes->stack_b, "sa");
	}
}

int ft_is_sorted(t_list *begin_list)
{
	while (begin_list->next != NULL && begin_list != NULL)
	{
		if (*(int *) begin_list->content > *(int *) begin_list->next->content)
			return (0);
		begin_list = begin_list->next;
	}
	return (1);
}

void ft_sort_5(t_stack *stackes)
{
	if (ft_is_sorted(stackes->stack_a))
		return;
	while (ft_lst_size(stackes->stack_b) < 2)
	{
		if (*(int *)stackes->stack_a->content == ft_min_in_lst(stackes->stack_a) \
 			|| *(int *) stackes->stack_a->content == ft_max_in_lst(stackes->stack_a))
			ft_instruction(&stackes->stack_a, &stackes->stack_b, "pb");
		else
			ft_instruction(&stackes->stack_a, &stackes->stack_b, "ra");
	}
	ft_sort_3(stackes);
	ft_instruction(&stackes->stack_a, &stackes->stack_b, "pa");
	ft_instruction(&stackes->stack_a, &stackes->stack_b, "pa");
	if (*(int *)stackes->stack_a->content == ft_max_in_lst(stackes->stack_a))
		ft_instruction(&stackes->stack_a, &stackes->stack_b, "ra");
	else
	{
		ft_instruction(&stackes->stack_a, &stackes->stack_b, "sa");
		ft_instruction(&stackes->stack_a, &stackes->stack_b, "ra");
	}
}