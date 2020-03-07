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
	{
		ft_instruction_checker(&stacks->stack_a, &stacks->stack_b, line);
		if (line)
			free(line);
	}
	if (ft_is_sorted(stacks->stack_a) && ft_lst_is_empty(stacks->stack_b))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}

int			is_flag(char *string, t_stack *stacks)
{
	if (ft_strcmp(string, "-v") == 0)
	{
		stacks->v_flag = 1;
		return (1);
	}
	return (0);
}

int			main(int ac, char **av)
{
	t_stack	stacks;
	t_data	data;

	stack_init(&stacks);
	if (ac == 1)
		return (0);
	is_flag(*(av + 1), &stacks);
	ft_parser(ac, av);
	ft_add_to_stack(ac, av, &stacks);
	ft_reverse_stack(&stacks);
	ft_has_duplicate(&stacks);
	if (ac >= 2 && is_flag(*(av + 1), &stacks))
	{
		init_data(&data, &stacks);
		visual(&data, &stacks);
		ft_clear_stack(data.opers);
		ft_clear_stack(data.oper);
	}
	else
		read_instructions(&stacks);
	ft_clear_stack(stacks.stack_a);
	ft_clear_stack(stacks.stack_b);
	return (0);
}
