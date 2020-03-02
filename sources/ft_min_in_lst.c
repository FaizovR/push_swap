#include "../includes/push_swap.h"

int			ft_min_in_lst(t_list *begin_list)
{
	int		min;
	t_list	*node;

	node = begin_list;
	min = *(int *)node->content;
	while (node != NULL)
	{
		if (*(int *)node->content < min)
			min = *(int *)node->content;
		node = node->next;
	}
	return (min);
}
