#include "../includes/push_swap.h"

void		ft_clear_stack(t_list *node)
{
	t_list	*p;

	if (!node)
		return ;
	while (node)
	{
		p = node->next;
		free(node);
		node = p;
	}
}
