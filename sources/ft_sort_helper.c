#include "../includes/push_swap.h"

void		final_r(t_stack *stack)
{
	t_list	*ptr;
	int		n_ra;
	int		n_rra;

	n_rra = 0;
	ptr = stack->stack_a;
	while (ptr->next)
	{
		if (*(int *)ptr->content > *(int *)ptr->next->content)
			n_ra = get_position(*stack->stack_a, *(int *)ptr->next->content);
		ptr = ptr->next;
	}
	if (!n_ra)
		return ;
	else
		n_rra = ft_lst_size(stack->stack_a) - n_rra;
	rotate_a(stack, n_ra, n_rra);
}

void		rotate_a(t_stack *stacks, int n_ra, int n_rra)
{
	if (n_ra > n_rra)
		while (n_rra--)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "rra");
	else
		while (n_ra--)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
}

void		push_to_a(t_stack *stacks, t_insert *tmp)
{
	t_res	res;

	count_again(tmp, *stacks, &res);
	if (res.rarrb == tmp->min)
		do_rarrb(&stacks->stack_a, &stacks->stack_b, *tmp);
	else if (res.rrarb == tmp->min)
		do_rrarb(&stacks->stack_a, &stacks->stack_b, *tmp);
	else
	{
		optimise(&(tmp->n_ra), &(tmp->n_rb), &(tmp->n_rr));
		optimise(&(tmp->n_rra), &(tmp->n_rrb), &(tmp->n_rrr));
		if ((res.rabr = tmp->n_ra + tmp->n_rb + tmp->n_rr) == tmp->min)
			do_rabr(&stacks->stack_a, &stacks->stack_b, *tmp);
		else if ((res.rrabr = tmp->n_rra + tmp->n_rrb + tmp->n_rrr) == tmp->min)
			do_rrabr(&stacks->stack_a, &stacks->stack_b, *tmp);
	}
	ft_instruction(&stacks->stack_a, &stacks->stack_b, "pa");
}

void		count_again(t_insert *insert, t_stack stacks, t_res *temp)
{
	t_list	*temp_b;

	temp_b = stacks.stack_b;
	while (insert->pos_min-- != 0)
		temp_b = temp_b->next;
	count_for_current(insert, stacks, temp_b, temp);
	temp->rabr = insert->n_ra + insert->n_rb + insert->n_rr;
	temp->rrabr = insert->n_rra + insert->n_rrb + insert->n_rrr;
}

void		count_moves(t_insert *insert, t_stack stacks)
{
	t_res	temp;
	t_list	*temp_b;

	temp_b = stacks.stack_b;
	while (temp_b != NULL)
	{
		count_for_current(insert, stacks, temp_b, &temp);
		optimise(&(insert->n_ra), &(insert->n_rb), &(insert->n_rr));
		optimise(&(insert->n_rra), &(insert->n_rrb), &(insert->n_rrr));
		temp.rabr = insert->n_ra + insert->n_rb + insert->n_rr;
		temp.rrabr = insert->n_rra + insert->n_rrb + insert->n_rrr;
		if (get_position(*stacks.stack_b, *(int *)temp_b->content) == 0
		|| insert->min > get_min(temp))
		{
			insert->min = get_min(temp);
			insert->pos_min = get_position(*stacks.stack_b,
					*(int *)temp_b->content);
		}
		temp_b = temp_b->next;
	}
}
