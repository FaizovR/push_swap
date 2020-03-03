#ifndef PUSH_SWAP_VISUAL_H
# define PUSH_SWAP_VISUAL_H

#include "mlx.h"
#include "push_swap.h"

# define W_WIDTH 1200
# define W_HEIGHT 1000

typedef struct		s_data
{
	void			*mlx_ptr;
	void 			*mlx_win;
}					t_data;

int		visual(t_data *data);
void	init_data(t_data *data);
#endif