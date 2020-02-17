#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct	s_stack
{
	t_list		*stack_a;
	t_list		*stack_b;
	t_list		*stack_operations;
} 				t_stack;

void ft_is_valid_str (const char *str);
void ft_parser (int ac, char **av);


void	operation_swap(t_list **top);
void	operation_push(t_list **dest, t_list **source);
void	operation_rotate(t_list **top);
void	operation_reverse_rotate(t_list **top);
void	double_operation(t_list **stack_a, t_list **stack_b, \
			void (*f)(t_list **));

#endif