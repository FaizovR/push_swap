#ifndef PUSH_SWAP_VISUAL_H
# define PUSH_SWAP_VISUAL_H

#include "mlx.h"
#include "push_swap.h"

typedef struct		s_data
{
	void			*mlx_ptr;
	void 			*mlx_win;
}					t_data;

int		visual(t_data *data);
void	init_data(t_data *data);
#endif