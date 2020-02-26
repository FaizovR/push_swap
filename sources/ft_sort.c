#include "../includes/push_swap.h"

void	init_insert(t_insert *insert, t_stack *stacks)
{
	insert->length_a = ft_lst_size(stacks->stack_a);
	insert->length_b = ft_lst_size(stacks->stack_b);
	insert->n_ra = 0;
	insert->n_rb = 0;
	insert->n_rr = 0;
	insert->n_rra = 0;
	insert->n_rrb = 0;
	insert->n_rrr = 0;
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

void	get_position_in_a_stack(t_list stack, t_insert *tmp, int value)
{
	int		pos;

	pos = 1;
	while (stack.next)
	{
		if ((*(int *)stack.content < value && *(int *)stack.next->content > value)
		|| (*(int *)stack.content < value && *(int *)stack.next->content < value &&
				*(int *)stack.content > *(int *)stack.next->content) ||
				(*(int *)stack.content > value && *(int *)stack.next->content > value && *(int *)stack.content > *(int *)stack.next->content))
		{
			tmp->num_in_a = pos;
			return;
		}
		pos++;
		stack = *stack.next;
	}
	tmp->num_in_a = 0;
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

int		get_min(t_res res)
{
	int min;

	min = res.rabr;
	(min > res.rrabr) ? (min = res.rrabr) : 0;
	(min > res.rarrb) ? (min = res.rarrb) : 0;
	(min > res.rrarb) ? (min = res.rrarb) : 0;
	return (min);
}

void	count_moves(t_insert *insert, t_stack stacks)
{
	t_res		temp;
	t_list		*temp_b;

	temp_b = stacks.stack_b;
	while (temp_b != NULL)
	{
		count_for_current(insert, stacks, temp_b, &temp);
		optimise(&(insert->n_ra), &(insert->n_rb), &(insert->n_rr));
		optimise(&(insert->n_rra), &(insert->n_rrb), &(insert->n_rrr));
		temp.rabr = insert->n_ra + insert->n_rb + insert->n_rr;
		temp.rrabr = insert->n_rra + insert->n_rrb + insert->n_rrr;
		if (get_position(*stacks.stack_b, *(int *)temp_b->content) == 0 || insert->min > get_min(temp))
		{
			insert->min = get_min(temp);
			insert->pos_min = get_position(*stacks.stack_b, *(int *)temp_b->content);
		}
		temp_b = temp_b->next;
	}
}

void	count_again(t_insert *insert, t_stack stacks, t_res *temp)
{
	t_list	*temp_b;

	temp_b = stacks.stack_b;
	while (insert->pos_min-- != 0)
		temp_b = temp_b->next;
	count_for_current(insert, stacks, temp_b, temp);
	temp->rabr = insert->n_ra + insert->n_rb + insert->n_rr;
	temp->rrabr = insert->n_rra + insert->n_rrb + insert->n_rrr;
}


void	push_to_a(t_stack *stacks, t_insert *tmp)
{
	t_res res;

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
void	rotate_a(t_stack *stacks, int n_ra, int n_rra)
{
	if (n_ra > n_rra)
		while (n_rra--)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "rra");
	else
		while (n_ra--)
			ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
}

void	final_r(t_stack *stack)
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

void ft_insert_sort(t_stack *stacks)
{
	t_insert	insert;
	int 		n;

	n = ft_lst_size(stacks->stack_a);
	while (n-- > 3)
		ft_instruction(&stacks->stack_a, &stacks->stack_b, "pb");
	ft_sort_3(stacks);
	init_insert(&insert, stacks);
	while(stacks->stack_b)
	{
		count_moves(&insert, *stacks);
		push_to_a(stacks, &insert);
		init_insert(&insert, stacks);
	}
	final_r(stacks);
}

void ft_sort(t_stack *stacks)
{
	int stack_a_size;

	stack_a_size = ft_lst_size(stacks->stack_a);
	if (stack_a_size <= 3)
		ft_sort_3(stacks);
	else if (stack_a_size <= 5)
		ft_sort_5(stacks);
	else if (stack_a_size > 5)
		ft_insert_sort(stacks);
}