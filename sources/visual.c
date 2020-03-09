#include "../includes/visual.h"

void		init_data(t_data *data, t_stack *stacks)
{
	data->mlx_ptr = NULL;
	data->win_ptr = NULL;
	data->opers = NULL;
	data->oper = NULL;
	data->stacks = stacks;
	data->col_height = (int)get_col_height(stacks->stack_a);
	data->col_width = (int)get_col_width(stacks->stack_a);
	data->oper_iter = 0;
}

void		indexing_help(int size, int *ar)
{
	int i;
	int j;
	int t;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (ar[i] < ar[j])
			{
				t = ar[i];
				ar[i] = ar[j];
				ar[j] = t;
			}
			j++;
		}
		i++;
	}
}

void		indexing(t_list **stack_a, int size)
{
	t_list	*tmp;
	int		ar[size];
	int		i;

	i = 0;
	tmp = *stack_a;
	while (i < size)
	{
		ar[i++] = *(int *)tmp->content;
		tmp = tmp->next;
	}
	indexing_help(size, ar);
	tmp = *stack_a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (ar[i] == *(int *)tmp->content)
				tmp->content_size = i + 1;
			i++;
		}
		tmp = tmp->next;
	}
}

int			deal_key(int key, t_data *data)
{
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		ft_clear_stack(data->opers);
		ft_clear_stack(data->oper);
		ft_clear_stack(data->stacks->stack_b);
		ft_clear_stack(data->stacks->stack_a);
		exit(0);
	}
	return (0);
}

int			visual(t_data *data, t_stack *stacks)
{
	indexing(&stacks->stack_a, ft_lst_size(stacks->stack_a));
	read_instructions_v(data, stacks);
	if ((data->mlx_ptr = mlx_init()) == NULL)
		return (EXIT_FAILURE);
	if ((data->win_ptr = mlx_new_window(data->mlx_ptr,
			W_WIDTH, W_HEIGHT, "Checker")) == NULL)
		return (EXIT_FAILURE);
	mlx_loop_hook(data->mlx_ptr, draw, data);
	mlx_key_hook(data->win_ptr, deal_key, data);
	mlx_loop(data->mlx_ptr);
	return (EXIT_SUCCESS);
}
