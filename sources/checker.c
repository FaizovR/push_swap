#include "../includes/push_swap.h"
#include "../includes/visual.h"

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
		ft_instruction_checker(&stacks->stack_a, &stacks->stack_b, line);
	if (ft_is_sorted(stacks->stack_a) && ft_lst_is_empty(stacks->stack_b))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int		is_flag(char *string)
{
	if (ft_strcmp(string, "-v") == 0)
		return (1);
	return (0);
}

int			main(int ac, char **av)
{
	t_stack	stacks;
	t_data	data;

	stack_init(&stacks);
	if (ac == 1)
		return (0);
	if (ac >= 2 && is_flag(*(av + 1)))
	{
		stacks.v_flag = 1;
		ft_parser(ac, av);
		ft_add_to_stack(ac, av, &stacks);
		ft_reverse_stack(&stacks);
		ft_has_duplicate(&stacks);
		init_data(&data, &stacks);
		visual(&data, &stacks);
	}
	else {
		ft_parser(ac, av);
		ft_add_to_stack(ac, av, &stacks);
		ft_reverse_stack(&stacks);
		ft_has_duplicate(&stacks);
		read_instructions(&stacks);
	}
	return (0);
}
