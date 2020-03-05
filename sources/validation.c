#include "../includes/push_swap.h"

void		ft_overflow_argument(const char *str, t_stack *stacks)
{
	if (ft_strlen(str) > 11)
		ft_handle_error_lst(stacks->stack_a, stacks->stack_b);
	if (ft_strcmp(INT_MAX_STR, str) < 0 && ft_strlen(str) >= 10)
		ft_handle_error_lst(stacks->stack_a, stacks->stack_b);
	if (str[0] == '+')
	{
		if (ft_strcmp(INT_MAX_STR, str + 1) < 0 && ft_strlen(str) >= 10)
			ft_handle_error_lst(stacks->stack_a, stacks->stack_b);
	}
	if (*str == '-')
	{
		if (ft_strcmp(INT_MIN_STR, str + 1) < 0 && ft_strlen(str) >= 11)
			ft_handle_error_lst(stacks->stack_a, stacks->stack_b);
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
		return ;
	}
	i = (stacks->v_flag) ? 2 : 1;
	while (++i < ac)
	{
		ft_overflow_argument(av[i], stacks);
		temp = ft_atoi(av[i]);
		ft_lstadd(&stacks->stack_a, ft_lstnew(&temp, sizeof(int)));
	}
}

void		ft_reverse_stack(t_stack *stacks)
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	prev = NULL;
	next = NULL;
	current = stacks->stack_a;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	stacks->stack_a = prev;
}

void		ft_has_duplicate(t_stack *stacks)
{
	t_list	*node;
	t_list	*tmp;

	node = stacks->stack_a;
	while (node != NULL)
	{
		tmp = node->next;
		while (tmp != NULL)
		{
			if (*(int*)node->content == *(int*)tmp->content)
				ft_handle_error(stacks->stack_a, stacks->stack_b);
			tmp = tmp->next;
		}
		node = node->next;
	}
}
