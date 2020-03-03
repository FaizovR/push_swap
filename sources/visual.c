#include "../includes/visual.h"

void	init_data(t_data *data)
{
	data->mlx_ptr = NULL;
	data->mlx_win = NULL;
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
	mlx_loop(data->mlx_ptr);
	return (EXIT_SUCCESS);
}