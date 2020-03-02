#include "../includes/push_swap.h"

int		get_min(t_res res)
{
	int min;

	min = res.rabr;
	(min > res.rrabr) ? (min = res.rrabr) : 0;
	(min > res.rarrb) ? (min = res.rarrb) : 0;
	(min > res.rrarb) ? (min = res.rrarb) : 0;
	return (min);
}

void	count_for_current(t_insert *insert, t_stack stacks, t_list *current,  t_res *res)
{
	insert->n_rb = get_position(*stacks.stack_b, *(int *)current->content);
	insert->n_rrb = ft_lst_size(stacks.stack_b) - get_position(*stacks.stack_b, *(int *)current->content);
	get_position_in_a_stack(*stacks.stack_a, insert, *(int *)current->content);
	insert->n_ra = insert->num_in_a;
	if (insert->num_in_a)
		insert->n_rra = ft_lst_size(stacks.stack_a) - insert->num_in_a;
	else
		insert->n_rra = 0;
	res->rarrb = insert->n_ra + insert->n_rrb;
	res->rrarb = insert->n_rra + insert->n_rb;
}

void	optimise(int *a1, int *a2, int *res)
{
	if (*a1 > *a2)
	{
		*res = *a2;
		*a1 -= *a2;
		*a2 = 0;
	}
	else
	{
		*res = *a1;
		*a2 -= *a1;
		*a1 = 0;
	}
}

void	get_position_in_a_stack(t_list stack, t_insert *tmp, int value)
{
	int		pos;

	pos = 1;
	while (stack.next)
	{
		if ((*(int *)stack.content < value && *(int *)stack.next->content > value)
			|| (*(int *)stack.content < value && *(int *)stack.next->content < value &&
				*(int *)stack.content > *(int *)stack.next->content) ||
			(*(int *)stack.content > value && *(int *)stack.next->content > value
			 && *(int *)stack.content > *(int *)stack.next->content))
		{
			tmp->num_in_a = pos;
			return;
		}
		pos++;
		stack = *stack.next;
	}
	tmp->num_in_a = 0;
}

int		get_position(t_list stack, int value)
{
	int		pos;

	pos = 0;
	while (*(int *)stack.content != value && stack.next)
	{
		pos++;
		stack = *stack.next;
	}
	return (pos);
}