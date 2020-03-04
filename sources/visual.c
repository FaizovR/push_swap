#include "../includes/visual.h"

void	init_data(t_data *data)
{
	data->mlx_ptr = NULL;
	data->win_ptr = NULL;
}

float	max_vs(float a, float b)
{
	return (a > b) ? a : b;
}

float	abs_vs(float num)
{
	return (num < 0) ? -num : num;
}

void	init_point(t_point *point, float x, float y)
{
	point->x = x;
	point->y = y;
}

void		draw_line(t_point *point1, t_point *point2, int color, t_data *data)
{
	float	x_step;
	float	y_step;
	float	max;

	x_step = point2->x - point1->x;
	y_step = point2->y - point1->y;

	max = max_vs(abs_vs(x_step), abs_vs(y_step));
	x_step /= max;
	y_step /= max;
	while ((int)(point1->x - point2->x) || (int)(point1->y - point2->y))
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, (int)point1->x, (int)point1->y, color);
		point1->x += x_step;
		point1->y += y_step;
	}
}

void		draw_box(t_point point, t_data *data, float width, float height, int color)
{
	t_point	point2;

	init_point(&point2, point.x + width, point.y);
	draw_line(&point, &point2, color, data);

	init_point(&point, point2.x, point2.y + height);
	draw_line(&point2, &point, color, data);

	init_point(&point2, point.x - width, point.y);
	draw_line(&point, &point2, color, data);

	init_point(&point2, point.x, point.y - height);
	draw_line(&point2, &point, color, data);
}

void		draw_rectangle(t_data *data, t_point start_p, float width, float height, int color)
{
	int		i;
	t_point	p1;
	t_point	p2;

	i = 0;
	while (i <= height)
	{
		init_point(&p1, start_p.x, start_p.y - i);
		init_point(&p2, start_p.x + width, start_p.y - i);
		draw_line(&p1, &p2, color, data);
		i++;
	}
}

float		get_col_height(t_list *stack_a)
{
	float	col_height;

	col_height = (W_STACK_HEIGHT - 2) / ft_lst_size(stack_a);
	return (col_height);
}

float		get_col_width(t_list *stack_a)
{
	float	col_width;

	col_width = (W_STACK_WIDTH - 2)/ ft_lst_size(stack_a);
	return (col_width);
}

void	draw_stack(t_data *data, t_list *stack, t_point *start_p, int color)
{
	if (!stack)
		return;
	while (stack)
	{
		draw_rectangle(data, *start_p, data->col_width, stack->content_size * data->col_height, color);
		start_p->x += data->col_width;
		stack = stack->next;
	}
}

void	indexing(t_list **stack_a, int size)
{
	t_list *tmp;
	int ar[size];
	int i;
	int j;
	int t;

	i = 0;
	tmp = *stack_a;
	while(i < size)
	{
		ar[i] = *(int *)tmp->content;
		i++;
		tmp = tmp->next;
	}

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

	tmp = *stack_a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (ar[i] == *(int *)tmp->content)
			{
				tmp->content_size = i + 1;
			}
			i++;
		}
		tmp = tmp->next;
	}
}


int		deal_key(int key, t_data *data)
{
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
		exit(0);
	}
	return (0);
}

void		draw_frame(t_data *data)
{
	t_point	p1;
	t_point	p2;

	init_point(&p1, 1200, 0);
	init_point(&p2, 1200, W_HEIGHT);

	draw_line(&p1, &p2, 0xffffff, data);

	init_point(&p1, 50, 50);
	draw_box(p1, data, 1100, 550, 0xffffff);

	mlx_string_put(data->mlx_ptr, data->win_ptr, 550, 15, 0xffffff, "Stack A");
	mlx_string_put(data->mlx_ptr, data->win_ptr, 550, 615, 0xffffff, "Stack B");

	init_point(&p2,50,650);
	draw_box(p2, data,1100,550,0xffffff);
}

int		draw(t_data *data)
{
	t_point		point;
	t_point		point2;
	t_list		*temp;
	temp = data->oper;
	if (temp)
	{
		ft_instruction_checker(&data->stacks->stack_a, &data->stacks->stack_b, (char *)temp->content);
//		printf("%s\n", (char *)temp->content);
		mlx_clear_window(data->mlx_ptr, data->win_ptr);
		draw_frame(data);
		init_point(&point,51,599);
		init_point(&point2,  51, 1199);
		draw_stack(data, data->stacks->stack_a, &point, 0x7a0000);
		draw_stack(data, data->stacks->stack_b, &point2, 0xe8e413);
		data->oper = data->oper->next;
	}
	else
	{
		mlx_loop_hook(data->mlx_ptr, NULL, data);
	}

	return (0);
}

void		ft_reverse_list(t_list **list)
{
	t_list	*current;
	t_list	*next;
	t_list	*prev;

	prev = NULL;
	next = NULL;
	current = *list;
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*list = prev;
}

void ft_print_list (t_list *list)
{
	t_list *node;
	int i = 0;
	node = list;
//	printf("\n===================Stack_a========================\n");
	while (node != NULL)
	{
		printf("line %d = |%s|\n", i, (char*)node->content);
		i++;
		node = node->next;
	}
}

void		read_instructions_v(t_data *data, t_stack *stacks)
{
	char	*line;

	line = NULL;
	(void)stacks;
	while (get_next_line(0, &line))
	{
		ft_lstadd(&data->oper, ft_lstnew(line, sizeof(line)));
		free(line);
	}
//	ft_print_list(data->oper);
	ft_reverse_list(&data->oper);
//	ft_print_list(data->oper);
}

int		visual(t_data *data, t_stack *stacks)
{
	indexing(&stacks->stack_a, ft_lst_size(stacks->stack_a));
	data->col_height = (int)get_col_height(stacks->stack_a);
	data->col_width = (int)get_col_width(stacks->stack_a);
	data->oper = NULL;
	read_instructions_v(data, stacks);
	data->stacks = stacks;
	if ((data->mlx_ptr = mlx_init()) == NULL)
		return (EXIT_FAILURE);
	if ((data->win_ptr = mlx_new_window(data->mlx_ptr, W_WIDTH, W_HEIGHT, "Checker")) == NULL)
		return (EXIT_FAILURE);
//	ft_print_list(data->oper);

	mlx_loop_hook(data->mlx_ptr, draw, data);
	mlx_key_hook(data->win_ptr, deal_key, data);
	mlx_loop(data->mlx_ptr);
	return (EXIT_SUCCESS);
}