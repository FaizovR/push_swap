#include "../includes/visual.h"

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

void		draw_stack(t_data *data, t_list *stack, t_point *start_p, int color)
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

void		draw_frame(t_data *data)
{
	t_point	p1;
	t_point	p2;
	char *str;

	str = ft_itoa(++data->oper_iter);
	init_point(&p1, 1200, 0);
	init_point(&p2, 1200, W_HEIGHT);
	draw_line(&p1, &p2, 0xffffff, data);
	init_point(&p1, 50, 50);
	draw_box(p1, data, 1100, 550, 0xffffff);
	mlx_string_put(data->mlx_ptr, data->win_ptr, 550, 15, 0xffffff, "Stack A");
	mlx_string_put(data->mlx_ptr, data->win_ptr, 550, 615, 0xffffff, "Stack B");
	mlx_string_put(data->mlx_ptr, data->win_ptr, 1230, 15, 0xffffff, "Operations: ");
	mlx_string_put(data->mlx_ptr, data->win_ptr, 1350, 15, 0xffffff, str);
	init_point(&p2,50,650);
	draw_box(p2, data,1100,550,0xffffff);
	ft_strdel(&str);
}