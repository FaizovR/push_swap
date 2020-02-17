#include "../includes/push_swap.h"

void ft_add_to_stack(int ac, char **av, t_stack *stackes)
{
	int i;
	int temp;
	char **str_arr;
	i = 0;
	if (ac == 2)
	{
		str_arr = ft_strsplit(av[1], ' ');
		while (str_arr[i])
		{
			temp = ft_atoi(str_arr[i]);
			ft_lstadd(&stackes->stack_a, ft_lstnew(&temp, sizeof(int)));
			i++;
		}
	}
	while (++i < ac)
	{
		temp = ft_atoi(av[i]);
		ft_lstadd(&stackes->stack_a, ft_lstnew(&temp, sizeof(int)));
	}
}

void ft_print_list(t_stack *stackes)
{
	t_list *node;
	node = stackes->stack_a;
	while (node != NULL)
	{
		printf("%d ", *(int*)node->content);
		node = node->next;
	}
}

void ft_reverse_stack (t_stack *stacks)
{
	t_list *current;
	t_list *next;
	t_list *prev;

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

int main(int ac, char **av)
{
	t_stack stackes;

	if (ac < 2)
	{
		ft_putstr("Error\n");
		exit(0);
	}
	ft_parser(ac, av);
	ft_add_to_stack(ac, av, &stackes);
	ft_reverse_stack(&stackes);
	ft_print_list(&stackes);
	return (0);
}