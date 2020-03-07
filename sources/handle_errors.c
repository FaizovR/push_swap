#include <visual.h>
#include "../includes/push_swap.h"

void	ft_handle_error(void)
{
	ft_putstr("Error\n");
	exit(0);
}

void	ft_handle_error_lst(t_list *stack_a, t_list *stack_b)
{
//	ft_lstdel(&stack_a, &del);
//	ft_lstdel(&stack_b, &del);
	ft_clear_stack(stack_a);
	ft_clear_stack(stack_b);
	ft_putstr("Error\n");
	exit(0);
}

void	del(void *content, size_t content_size)
{
	free(content);
	content = NULL;
	content_size = 0;
}

void	stack_init(t_stack *stacks)
{
	stacks->min = 0;
	stacks->max = 0;
	stacks->stack_b = NULL;
	stacks->stack_a = NULL;
	stacks->v_flag = 0;
}
