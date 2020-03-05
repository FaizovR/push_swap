#include "../includes/push_swap.h"

void		ft_reverse_list(t_list **list)
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	prev = NULL;
	next = NULL;
	current = *list;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*list = prev;
}