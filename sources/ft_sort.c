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
	insert->min = 0;
	insert->num_in_a = 0;
	insert->pos_b = 0;
	insert->pos_min = 0;
}

int		get_sum_operations(t_insert *insert)
{
	return(insert->n_ra + insert->n_rb + insert->n_rrr + insert->n_rr + insert->n_rrb + insert->n_rra);
}

int		get_position(t_list stack, int value)
{
	int		pos;

	pos = 0;
	while (*(int *)stack.content != value)
	{
		pos++;
		stack = *stack.next;
	}
	return (pos);
}

void		get_position_in_a_stack(t_list stack, t_insert *tmp, int value)
{
    int		pos;

    pos = 0;
    while (*(int *)stack.content < value)
    {
        pos++;
        stack = *stack.next;
    }
    tmp->num_in_a = pos;
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

void		count_for_current(t_insert *insert, t_stack stacks, t_list *current,  t_res *res)
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

void	count_moves(t_insert *insert, t_stack stacks, t_res *res)
{

    t_list      *temp_b;
    t_res       temp;
    t_insert    insert_temp;

    init_insert(&insert_temp, &stacks);
    temp_b = stacks.stack_b;
	while (temp_b != NULL)
	{
        count_for_current(&insert_temp, stacks, temp_b, &temp);
        optimise(&(insert_temp.n_ra), &(insert_temp.n_rb), &(insert_temp.n_rr));
        optimise(&(insert_temp.n_rra), &(insert_temp.n_rrb), &(insert_temp.n_rrr));
        temp.rabr = insert_temp.n_ra + insert_temp.n_rb + insert_temp.n_rr;
        temp.rrabr = insert_temp.n_rra + insert_temp.n_rrb + insert_temp.n_rrr;
        if (get_position(*stacks.stack_b, *(int *)temp_b->content) == 0 || insert->min > get_min(temp))
        {
            res->rabr = temp.rabr;
            res->rarrb = temp.rarrb;
            res->rrabr = temp.rrabr;
            temp.rrarb = temp.rrarb;
            insert->n_ra = insert_temp.n_ra;
            insert->n_rb = insert_temp.n_rb;
            insert->n_rr = insert_temp.n_rr;
            insert->n_rra = insert_temp.n_rra;
            insert->n_rrb = insert_temp.n_rrb;
            insert->n_rrr = insert_temp.n_rrr;
            insert->min = get_min(*res);
            insert->pos_min = get_position(*stacks.stack_b, *(int *)temp_b->content);
            insert->value_min = *(int *)temp_b->content;
        }
        temp_b = temp_b->next;
	}
}

void	do_rarrb(t_list **a, t_list **b, t_insert tmp)
{
    while (tmp.n_ra--)
        ft_instruction(a, b, "ra");
    while (tmp.n_rrb--)
        ft_instruction(a, b, "rrb");
}

void	do_rrarb(t_list **a, t_list **b, t_insert tmp)
{
    while (tmp.n_rra--)
        ft_instruction(a, b, "rra");
    while (tmp.n_rb--)
        ft_instruction(a, b, "rb");
}

void	do_rabr(t_list **a, t_list **b, t_insert tmp)
{
    while (tmp.n_rr--)
        ft_instruction(a, b, "rr");
    while (tmp.n_ra--)
        ft_instruction(a, b, "ra");
    while (tmp.n_rb--)
        ft_instruction(a, b, "rb");
}

void	do_rrabr(t_list **a, t_list **b, t_insert tmp)
{
    while (tmp.n_rrr--)
        ft_instruction(a, b, "rrr");
    while (tmp.n_rra--)
        ft_instruction(a, b, "rra");
    while (tmp.n_rrb--)
        ft_instruction(a, b, "rrb");
}

void    push_to_a(t_stack *stackes, t_insert *tmp, t_res res)
{
    if (res.rarrb == tmp->min)
        do_rarrb(&stackes->stack_a, &stackes->stack_b, *tmp);
    else if (res.rrarb == tmp->min)
        do_rrarb(&stackes->stack_a, &stackes->stack_b, *tmp);
    else
    {
        if ((res.rabr = tmp->n_ra + tmp->n_rb + tmp->n_rr) == tmp->min)
            do_rabr(&stackes->stack_a, &stackes->stack_b, *tmp);
        else if ((res.rrabr = tmp->n_rra + tmp->n_rrb + tmp->n_rrr) == tmp->min)
            do_rrabr(&stackes->stack_a, &stackes->stack_b, *tmp);
    }
    ft_instruction(&stackes->stack_a, &stackes->stack_b, "pa");
}

void ft_insert_sort(t_stack *stackes)
{
	t_insert	insert;
    t_res       res;
	t_list      *stack_b;

	while (ft_lst_size(stackes->stack_a) > 3)
		ft_instruction(&stackes->stack_a, &stackes->stack_b, "pb");
	ft_sort_3(stackes);
    ft_print_list(stackes);
    stack_b = stackes->stack_b;
    while(stackes->stack_b)
	{
		init_insert(&insert, stackes);
		count_moves(&insert, *stackes, &res);
        printf("%d", insert.min);
        push_to_a(stackes, &insert, res);
        ft_print_list(stackes);
	}
}


void ft_sort(t_stack *stackes)
{
	if (ft_lst_size(stackes->stack_a) <= 3)
		ft_sort_3(stackes);
	else if (ft_lst_size(stackes->stack_a) <= 5)
		ft_sort_5(stackes);
	else
		ft_insert_sort(stackes);
}