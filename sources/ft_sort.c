#include "../includes/push_swap.h"

void			init_insert(t_insert *insert)
{
	insert->n_ra = 0;
	insert->n_rb = 0;
	insert->n_rr = 0;
	insert->n_rra = 0;
	insert->n_rrb = 0;
	insert->n_rrr = 0;
}

void			ft_insert_sort(t_stack *stacks)
{
	t_insert	insert;
	int			n;

	n = ft_lst_size(stacks->stack_a);
	while (n-- > 3)
		ft_instruction(&stacks->stack_a, &stacks->stack_b, "pb");
	ft_sort_3(stacks);
	init_insert(&insert);
	while (stacks->stack_b)
	{
		count_moves(&insert, *stacks);
		push_to_a(stacks, &insert);
		init_insert(&insert);
	}
	final_r(stacks);
}

void			ft_sort(t_stack *stacks)
{
	int			stack_a_size;

	stack_a_size = ft_lst_size(stacks->stack_a);
	if (stack_a_size <= 3)
		ft_sort_3(stacks);
	else if (stack_a_size <= 5)
		ft_sort_5(stacks);
	else
		ft_insert_sort(stacks);
}
