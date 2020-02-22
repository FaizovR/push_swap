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

void	get_position_in_a(t_list *b, t_insert *tmp, t_list *ptr_a)
{
    t_list *ptr_next;

    ptr_next = ptr_a->next;




    while (ptr_next)
    {
        if ((*(int *)ptr_a->content < *(int *)b->content && *(int *)b->content < *(int *)ptr_next->content) ||
            (*(int *)ptr_a->content < *(int *)b->content && *(int *)b->content > *(int *)ptr_next->content &&
            *(int *)ptr_a->content > *(int *)ptr_next->content) || (*(int *)ptr_a->content > *(int *)b->content &&
            *(int *)b->content < *(int *)ptr_next->content && *(int *)ptr_a->content > *(int *)ptr_next->content))
        {
            tmp->num_in_a = get_position(*ptr_a, *(int*)ptr_next->content);
            return ;
        }
        ptr_a = ptr_a->next;
        ptr_next = ptr_a->next;
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

void		count_for_current(t_insert *insert, t_stack stacks, t_list *current,  t_res *res)
{
    insert->n_rb = get_position(*stacks.stack_b, *(int *)current->content);
    insert->n_rrb = ft_lst_size(stacks.stack_b) - get_position(*stacks.stack_b, *(int *)current->content);
    get_position_in_a(stacks.stack_b, insert, stacks.stack_a);
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
	t_res       res;
    t_list      *temp_b;

    temp_b = stacks.stack_b;
	while (temp_b != NULL)
	{
        count_for_current(insert, stacks, temp_b, &res);
        optimise(&(insert->n_ra), &(insert->n_rb), &(insert->n_rr));
        optimise(&(insert->n_rra), &(insert->n_rrb), &(insert->n_rrr));
        res.rabr = insert->n_ra + insert->n_rb + insert->n_rr;
        res.rrabr = insert->n_rra + insert->n_rrb + insert->n_rrr;
        if (get_position(*stacks.stack_b, *(int *)temp_b->content) == 0 || insert->min > get_min(res))
        {
            insert->min = get_min(res);
            insert->pos_min = get_position(*stacks.stack_b, *(int *)temp_b->content);
        }
        temp_b = temp_b->next;
	}
}


void ft_insert_sort(t_stack *stackes)
{
	t_insert	insert;

	t_list      *stack_b;


	while (ft_lst_size(stackes->stack_a) > 3)
		ft_instruction(&stackes->stack_a, &stackes->stack_b, "pb");
//    ft_print_list(stackes);
	ft_sort_3(stackes);
    ft_print_list(stackes);
    stack_b = stackes->stack_b;
    printf("\n123\n");
    int num;

    while(stack_b)
	{
	    num = *(int *)stack_b->content;
		init_insert(&insert, stackes);
		count_moves(&insert, *stackes);
        printf("%d", insert.min);
        stack_b = stack_b->next;
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