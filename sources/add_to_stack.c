#include "../includes/push_swap.h"

void		ft_delete_double_arr(char **arr)
{
	int		i;

	if (!arr || !*arr)
		return ;
	i = 0;
	while (arr[i])
		ft_strdel(&arr[i++]);
	free(arr);
}

void		help1(int ac, char **av, t_stack **stacks)
{
	int		temp;
	int		i;

	i = ((*stacks)->v_flag) ? 2 : 1;
	while (i < ac)
	{
		ft_overflow_argument(av[i], *stacks);
		temp = ft_atoi(av[i]);
		ft_lstadd(&(*stacks)->stack_a, ft_lstnew(&temp, sizeof(int)));
		i++;
	}
}

void		ft_add_to_stack(int ac, char **av, t_stack *stacks)
{
	int		i;
	int		index;
	int		temp;
	char	**str_arr;

	i = 0;
	index = (stacks->v_flag) ? 2 : 1;
	if ((ac == 2 && !stacks->v_flag) || (ac == 3 && stacks->v_flag))
	{
		str_arr = ft_strsplit(av[index], ' ');
		while (str_arr[i])
		{
			ft_overflow_argument(str_arr[i], stacks);
			temp = ft_atoi(str_arr[i]);
			ft_lstadd(&stacks->stack_a, ft_lstnew(&temp, sizeof(int)));
			i++;
		}
		ft_delete_double_arr(str_arr);
		return ;
	}
	help1(ac, av, &stacks);
	if (!stacks->stack_a)
		ft_handle_error();
}
