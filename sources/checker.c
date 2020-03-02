#include "../includes/push_swap.h"

int			ft_lst_is_empty(t_list *node)
{
	if (!node)
		return (1);
	return (0);
}

void		read_instructions(t_stack *stacks)
{
	char	*line;

	while (get_next_line(0, &line))
	{
		ft_instruction_checker(&stacks->stack_a, &stacks->stack_b, line);
	}
	if (ft_is_sorted(stacks->stack_a) && ft_lst_is_empty(stacks->stack_b))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int			main(int ac, char **av)
{
	t_stack	stacks;

	if (ac == 1)
		return (0);
	ft_parser(ac, av);
	ft_add_to_stack(ac, av, &stacks);
	ft_reverse_stack(&stacks);
	ft_has_duplicate(&stacks);
	read_instructions(&stacks);
}
