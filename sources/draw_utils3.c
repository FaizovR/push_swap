#include "../includes/visual.h"

void			read_instructions_v(t_data *data, t_stack *stacks)
{
	char		*line;

	line = NULL;
	while (get_next_line(0, &line))
	{
		is_oper(stacks, line);
		ft_lstadd(&data->oper, ft_lstnew(line, sizeof(line)));
		if (line)
			free(line);
	}
	ft_reverse_list(&data->oper);
}

void			print_instruction(t_data *data, t_list *list)
{
	float		x;
	float		y;

	y = 40;
	x = W_WIDTH - 120;
	while (list->content && y < W_HEIGHT - 20)
	{
		mlx_string_put(data->mlx_ptr, data->win_ptr, x, y,
				0x1ab000, (char *)list->content);
		y += 40;
		if (list->next)
			list = list->next;
		else
			break ;
	}
}

void			draw_help(t_data *data, t_point *point, t_point *point2)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	draw_frame(data);
	init_point(point, 51, 599);
	init_point(point2, 51, 1199);
	draw_stack(data, data->stacks->stack_a, point, 0x7a0000);
	draw_stack(data, data->stacks->stack_b, point2, 0xe8e413);
	print_instruction(data, data->opers);
}

int				draw(t_data *data)
{
	t_point		point;
	t_point		point2;
	t_list		*temp;
	t_list		*tmp;

	temp = data->oper;
	if (temp)
	{
		ft_instruction_checker(&data->stacks->stack_a, &data->stacks->stack_b,
				(char *)temp->content);
		ft_lstadd(&data->opers, ft_lstnew((char *)temp->content,
				sizeof((char *)temp->content)));
		draw_help(data, &point, &point2);
		tmp = data->oper;
		data->oper = data->oper->next;
		free(tmp->content);
		free(tmp);
	}
	else
		mlx_loop_hook(data->mlx_ptr, NULL, data);
	return (0);
}
