#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define INT_MIN_STR "2147483648"
# define INT_MAX_STR "2147483647"
# define PS_USAGE "Usage: ./push_swap <numbers>"

typedef struct	s_stack
{
	t_list		*stack_a;
	t_list		*stack_b;
	t_list		*stack_operations;
} 				t_stack;

//==============================================PARSER AND VALIDATION===================================================
void ft_is_valid_str (const char *str);
void ft_parser (int ac, char **av);
void ft_has_duplicate (t_stack *stackes);
void ft_reverse_stack (t_stack *stacks);
void ft_print_list (t_stack *stackes);
void ft_add_to_stack (int ac, char **av, t_stack *stackes);
void ft_overflow_argument(const char *str);

//==================================================ERRORS==============================================================
void handle_error();
void handle_usage();

//==================================================OPERATIONS==========================================================
void	operation_swap(t_list **top);
void	operation_push(t_list **dest, t_list **source);
void	operation_rotate(t_list **top);
void	operation_reverse_rotate(t_list **top);
void	double_operation(t_list **stack_a, t_list **stack_b, \
			void (*f)(t_list **));

#endif