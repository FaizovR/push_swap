#ifndef PUSH_SWAP_VISUAL_H
# define PUSH_SWAP_VISUAL_H

#include "mlx.h"
#include "push_swap.h"

# define W_WIDTH 1400
# define W_HEIGHT 1250
# define W_STACK_HEIGHT 550
# define W_STACK_WIDTH 1100

typedef struct	s_point
{
	float		x;
	float		y;
}				t_point;

typedef struct	s_data
{
	t_list		*oper;
	t_list		*opers;
	int			oper_iter;
	void		*mlx_ptr;
	void		*win_ptr;
	int			col_width;
	int			col_height;
	t_stack 	*stacks;
}				t_data;

int				visual(t_data *data, t_stack *stacks);
void			init_data(t_data *data, t_stack *stacks);
float			get_col_width(t_list *stack_a);
float			get_col_height(t_list *stack_a);
void			init_point(t_point *point, float x, float y);
float			abs_vs(float num);
float			max_vs(float a, float b);

void			draw_line(t_point *point1, t_point *point2, int color, t_data *data);
void			draw_box(t_point point, t_data *data, float w, float d);
void			draw_rectangle(t_data *data, t_point start_p, t_point *w_h, int c);
void			draw_stack(t_data *data, t_list *stack, t_point *start_p, int color);
void			draw_frame(t_data *data);
void 			is_oper(t_stack *stacks, char *name);

int				draw(t_data *data);
void			draw_help(t_data *data, t_point *point, t_point *point2);
void			read_instructions_v(t_data *data, t_stack *stacks);
void			print_instruction(t_data *data, t_list *list);
int				is_flag(char *string, t_stack *stacks);
void			indexing_help(int size, int *ar);
void			indexing(t_list **stack_a, int size);

#endif