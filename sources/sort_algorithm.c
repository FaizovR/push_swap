#include "../includes/push_swap.h"

size_t			ft_lst_size(t_list *begin_list)
{
	size_t	i;

	i = 0;
	while (begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

int				ft_is_lst_empty(t_list *begin_list)
{
	return (ft_lst_size(begin_list) ? 0 : 1);
}

int		get_pivot(t_list *stack)
{
	size_t		stack_size = 0;
	size_t		i;

	i = 1;
	stack_size = ft_lst_size(stack);
	stack_size % 2 ? stack_size++ : stack_size;
	while(i < stack_size / 2)
	{
		stack = stack->next;
		i++;
	}
	return (*(int *)stack->content);
}

//
//int 			sort(t_stack *stacks)
//{
//	while(ft_lst_size(stacks->stack_a) > 5)
//	{
//		quick_sort(stacks);
//	}
//}
