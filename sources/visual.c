#include "../includes/visual.h"

void	init_data(t_data *data)
{
	data->mlx_ptr = NULL;
	data->mlx_win = NULL;
}

int		deal_key(int key)
{
	printf("%d\n", key);
	return (0);
}


static int	close_win(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->mlx_win);
	exit(0);
}

int		visual(t_data *data)
{
	if ((data->mlx_ptr = mlx_init()) == NULL)
	return (EXIT_FAILURE);
	if ((data->mlx_win = mlx_new_window(data->mlx_ptr, 1200, 1000, "Checker")) == NULL)
	return (EXIT_FAILURE);
	mlx_key_hook(data->mlx_win, deal_key, data);
	mlx_hook(data->mlx_win, 17, 0, close_win, &data);
	mlx_loop(data->mlx_ptr);
	return (EXIT_SUCCESS);
}