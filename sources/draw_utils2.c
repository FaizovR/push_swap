#include "../includes/visual.h"

float		max_vs(float a, float b)
{
	return (a > b) ? a : b;
}

float		abs_vs(float num)
{
	return (num < 0) ? -num : num;
}

void		init_point(t_point *point, float x, float y)
{
	point->x = x;
	point->y = y;
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

	col_width = (W_STACK_WIDTH - 2) / ft_lst_size(stack_a);
	return (col_width);
}
