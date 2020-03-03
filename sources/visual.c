#include "../includes/visual.h"

void	init_data(t_data *data)
{
	data->mlx_ptr = NULL;
	data->mlx_win = NULL;
}

float	max_vs(float a, float b)
{
	return (a > b) ? a : b;
}

float	abs_vs(float num)
{
	return (num < 0) ? -num : num;
}

void	draw_line(float x, float y, float x1, float y1, t_data *data)
{
	float x_step;
	float y_step;
	float max;

	x_step = x1 - x;
	y_step = y1 - y;

	max = max_vs(abs_vs(x_step), abs_vs(y_step));
	x_step /= max;
	y_step /= max;
	while ((int)(x - x1) || (int)(y - y1))
	{
		mlx_pixel_put(data->mlx_ptr, data->mlx_win, (int)x, (int)y, 0xfffffff);
		x += x_step;
		y += y_step;
	}
}

int		deal_key(int key, t_data *data)
{
	if (key == 53)
	{
		mlx_destroy_window(data->mlx_ptr, data->mlx_win);
		exit(0);
	}
	return (0);
}

int		visual(t_data *data)
{
	if ((data->mlx_ptr = mlx_init()) == NULL)
		return (EXIT_FAILURE);
	if ((data->mlx_win = mlx_new_window(data->mlx_ptr, W_WIDTH, W_HEIGHT, "Checker")) == NULL)
		return (EXIT_FAILURE);
	mlx_key_hook(data->mlx_win, deal_key, data);
	draw_line(1200, 0, 1200, W_HEIGHT, data);

	draw_line(50, 50, 1150, 50, data);
	draw_line(1150, 50, 1150, 500, data);
	draw_line(1150, 500, 50, 500, data);
	draw_line(50, 500, 50, 50, data);
	mlx_string_put(data->mlx_ptr, data->mlx_win, 550, 15, 0xffffff, "Stack A");
	mlx_string_put(data->mlx_ptr, data->mlx_win, 550, 515, 0xffffff, "Stack B");

	draw_line(50, 550, 1150, 550, data);
	draw_line(1150, 550, 1150, 1000, data);
	draw_line(1150, 1000, 50, 1000, data);
	draw_line(50, 1000, 50, 550, data);

	mlx_loop(data->mlx_ptr);
	return (EXIT_SUCCESS);
}