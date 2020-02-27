#include "../includes/push_swap.h"

//void *ft_del_node (t_list *node)
//{
//	free(node);
//	return (NULL);
//}

void		ft_clear_stack(t_list *node)
{
	t_list *ptr;

	while (node)
	{
		ptr = node->next;
		free(node);
		node = ptr;
	}
}

int main(int ac, char **av)
{
	t_stack stacks;

	if (ac == 1)
		exit(0);
	ft_parser(ac, av);
	ft_add_to_stack(ac, av, &stacks);
	ft_reverse_stack(&stacks);
	ft_has_duplicate(&stacks);
	if (ft_is_sorted(stacks.stack_a))
	    exit(0);
	ft_sort(&stacks);
//	ft_lstiter(stacks.stack_a, ft_del_node(stacks.stack_a));
//	ft_lstiter(stacks.stack_b, ft_del_node(stacks.stack_b));
	ft_clear_stack(stacks.stack_a);
	ft_clear_stack(stacks.stack_b);
	return (0);
}