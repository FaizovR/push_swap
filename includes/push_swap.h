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
	int			max;
	int			min;
}				t_stack;


typedef struct	s_insert
{
//	int			length_a;
//	int			length_b;
	int			n_ra;
	int			n_rb;
	int			n_rr;
	int			n_rra;
	int			n_rrb;
	int			n_rrr;
	int			num_in_a;
//	int			pos_b;
	int			min;
	int			pos_min;
}				t_insert;


typedef struct	s_res
{
	int			rabr;
	int			rrabr;
	int			rarrb;
	int			rrarb;
}				t_res;

//==============================================PARSER AND VALIDATION===================================================
void			ft_is_valid_str (const char *str);
void			ft_parser (int ac, char **av);
void			ft_has_duplicate (t_stack *stacks);
void			ft_reverse_stack (t_stack *stacks);
void			ft_print_list (t_stack *stacks);
void			ft_add_to_stack (int ac, char **av, t_stack *stacks);
void			ft_overflow_argument(const char *str);

//==================================================ERRORS==============================================================
void			ft_handle_error();

//==================================================OPERATIONS==========================================================
void			operation_swap(t_list **top);
void			operation_push(t_list **dest, t_list **source);
void			operation_rotate(t_list **top);
void			operation_reverse_rotate(t_list **top);
void			double_operation(t_list **stack_a, t_list **stack_b, \
			void (*f)(t_list **));
int				ft_lst_size(t_list *begin_list);
void			ft_instruction(t_list **stack_a, t_list **stack_b, char *name);

void			ft_sort_3(t_stack *stacks);
void			ft_sort_5(t_stack *stacks);
int				ft_max_in_lst(t_list *begin_list);
int				ft_min_in_lst(t_list *begin_list);
int				ft_is_sorted(t_list *begin_list);
void			ft_sort(t_stack *stacks);
void			ft_insert_sort(t_stack *stacks);

void			do_rrabr(t_list **a, t_list **b, t_insert tmp);
void			do_rabr(t_list **a, t_list **b, t_insert tmp);
void			do_rrarb(t_list **a, t_list **b, t_insert tmp);
void			do_rarrb(t_list **a, t_list **b, t_insert tmp);



void			ft_instruction_checker(t_list **stack_a, t_list **stack_b, char *name);
void			ft_overflow_argument(const char *str);
void			ft_add_to_stack(int ac, char **av, t_stack *stacks);
void			ft_reverse_stack(t_stack *stacks);
void			ft_has_duplicate(t_stack *stacks);

#endif
