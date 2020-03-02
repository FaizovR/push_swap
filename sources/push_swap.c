#include "../includes/push_swap.h"

int			main(int ac, char **av)
{
	t_stack	stacks;

	stack_init(&stacks);
	if (ac == 1)
		exit(0);
	ft_parser(ac, av);
	ft_add_to_stack(ac, av, &stacks);
	ft_reverse_stack(&stacks);
	ft_has_duplicate(&stacks);
	if (ft_is_sorted(stacks.stack_a))
		exit(0);
	ft_sort(&stacks);
	ft_lstdel(&stacks.stack_a, &del);
	ft_lstdel(&stacks.stack_b, &del);
	return (0);
}
