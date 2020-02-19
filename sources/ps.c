#include "../includes/push_swap.h"



void ft_overflow_argument(const char *str)
{
	if (ft_strcmp(INT_MAX_STR, str) < 0 && ft_strlen(str) == 10)
		ft_handle_error();
	if (str[0] == '+')
	{
		if (ft_strcmp(INT_MAX_STR, str + 1) < 0 && ft_strlen(str) == 10)
			ft_handle_error();
	}
	if (*str == '-')
	{
		if (ft_strcmp(INT_MIN_STR, str + 1) < 0 && ft_strlen(str) == 10)
			ft_handle_error();
	}
}

void ft_add_to_stack (int ac, char **av, t_stack *stackes)
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
			ft_overflow_argument(str_arr[i]);
			temp = ft_atoi(str_arr[i]);
			ft_lstadd(&stackes->stack_a, ft_lstnew(&temp, sizeof(int)));
			i++;
		}
	}
	while (++i < ac)
	{
		ft_overflow_argument(av[i]);
		temp = ft_atoi(av[i]);
		ft_lstadd(&stackes->stack_a, ft_lstnew(&temp, sizeof(int)));
	}
	stackes->max = ft_max_in_lst(stackes->stack_a);
    stackes->min = ft_min_in_lst(stackes->stack_a);
}

void ft_print_list (t_stack *stackes)
{
	t_list *node;
	node = stackes->stack_a;
	printf("\n===================Stack_a========================\n");
	while (node != NULL)
	{
		printf("%d ", *(int*)node->content);
		node = node->next;
	}
	printf("\n===================Stack_b========================\n");
	node = stackes->stack_b;
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

void ft_has_duplicate (t_stack *stackes)
{
	t_list *node;
	t_list *tmp;
	node = stackes->stack_a;
	while (node != NULL)
	{
		tmp = node->next;
		while (tmp != NULL)
		{
			if (*(int*)node->content == *(int*)tmp->content)
				ft_handle_error();
			tmp = tmp->next;
		}
		node = node->next;
	}
}

int				quick_sort(t_stack *stacks)
{
	int		pivot;

	pivot = get_pivot(stacks->stack_a);
	printf("\npivot == %d\n", pivot);
	while(ft_lst_size(stacks->stack_a) > 5)
	{
		if (*(int *)stacks->stack_a->content == pivot)
		{
			ft_print_list(stacks);
			pivot = get_pivot(stacks->stack_a);
			printf("\npivot == %d\n", pivot);
		}
		while (*(int *)stacks->stack_a->content != pivot)
		{
			if (*(int *) stacks->stack_a->content > pivot)
				ft_instruction(&stacks->stack_a, &stacks->stack_b, "pb");
			else
				ft_instruction(&stacks->stack_a, &stacks->stack_b, "ra");
		}
//		ft_print_list(stacks);
	}
	return (1);
}

void test(t_stack *stack)
{
	quick_sort(stack);
}


int main(int ac, char **av)
{
	t_stack stackes;

	if (ac == 1)
		exit(0);
	if (ac < 2)
		ft_handle_error();
	ft_parser(ac, av);
	ft_add_to_stack(ac, av, &stackes);
	ft_reverse_stack(&stackes);
	ft_has_duplicate(&stackes);
//	ft_print_list(&stackes);
//	test(&stackes);
	ft_print_list(&stackes);
//	ft_sort_3(&stackes);
	ft_sort_5(&stackes);
	ft_print_list(&stackes);
	return (0);
}