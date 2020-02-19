#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define INT_MIN_STR "2147483648"
# define INT_MAX_STR "2147483647"

typedef struct	s_stack
{
	t_list		*stack_a;
	t_list		*stack_b;
	t_list		*stack_operations;
	int         max;
	int         min;
} 				t_stack;


typedef struct s_insert
{
    int length_a;
    int length_b;
    int n_ra;
    int n_rb;
    int n_rr;
    int n_rra;
    int n_rrb;
    int n_rrr;
}              t_insert;
//==============================================PARSER AND VALIDATION===================================================
void ft_is_valid_str (const char *str);
void ft_parser (int ac, char **av);
void ft_has_duplicate (t_stack *stackes);
void ft_reverse_stack (t_stack *stacks);
void ft_print_list (t_stack *stackes);
void ft_add_to_stack (int ac, char **av, t_stack *stackes);
void ft_overflow_argument(const char *str);

//==================================================ERRORS==============================================================
void	ft_handle_error();

//==================================================OPERATIONS==========================================================
void	operation_swap(t_list **top);
void	operation_push(t_list **dest, t_list **source);
void	operation_rotate(t_list **top);
void	operation_reverse_rotate(t_list **top);
void	double_operation(t_list **stack_a, t_list **stack_b, \
			void (*f)(t_list **));
size_t	ft_lst_size(t_list *begin_list);
void	ft_instruction(t_list **stack_a, t_list **stack_b, char *name);
int		get_pivot(t_list *stack);

void 	ft_sort_3(t_stack *stackes);
int		ft_max_in_lst(t_list *begin_list);
void 	ft_sort_5(t_stack *stackes);
int		ft_min_in_lst(t_list *begin_list);
int     ft_is_sorted(t_list *begin_list);
void    ft_sort(t_stack *stackes);
#endif