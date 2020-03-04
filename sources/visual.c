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

void		draw_rectangle(t_data *data, float x, float y, float width, float height)
{
	int		i;
	t_point	p1;
	t_point	p2;

	i = 0;
	while (i <= height)
	{
		init_point(&p1, x, y - i);
		init_point(&p2, x + width, y - i);
		draw_line(&p1, &p2, 0x7a0000, data);
		i++;
	}
}

float		get_col_height(t_stack *stacks)
{
	float	col_height;

	col_height = W_STACK_HEIGHT / ft_lst_size(stacks->stack_a);
	return (col_height);
}

float		get_col_width(t_stack *stacks)
{
	float	col_width;

	col_width = W_STACK_WIDTH / ft_lst_size(stacks->stack_a);
	return (col_width);
}

//void	draw_stack(t_data *data, t_list *stack, float x_start, float y_start)
//{
//
//}
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

int		visual(t_data *data, t_stack *stacks)
{
	if ((data->mlx_ptr = mlx_init()) == NULL)
		return (EXIT_FAILURE);
	if ((data->win_ptr = mlx_new_window(data->mlx_ptr, W_WIDTH, W_HEIGHT, "Checker")) == NULL)
		return (EXIT_FAILURE);
	mlx_key_hook(data->win_ptr, deal_key, data);
	draw_frame(data);
	(void)stacks;
//	draw_rectangle(data, 50, 600, 1100, 550);
	indexing(&stacks->stack_a, ft_lst_size(stacks->stack_a));
	mlx_loop(data->mlx_ptr);

	return (EXIT_SUCCESS);
}