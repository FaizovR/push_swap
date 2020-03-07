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
				ft_handle_error_lst(stacks->stack_a, stacks->stack_b);
			tmp = tmp->next;
		}
		node = node->next;
	}
}
