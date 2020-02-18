#include "../includes/push_swap.h"

int ft_max_in_lst (t_list *begin_list)
{
	int max;
	t_list *node;

	node = begin_list;
	max = *(int *)node->content;
	while (node != NULL)
	{
		if (*(int *)node->content > max)
			max = *(int *)node->content;
		node = node->next;
	}
	return max;
}