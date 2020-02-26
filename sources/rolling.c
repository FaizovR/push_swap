#include "../includes/push_swap.h"

void	do_rarrb(t_list **a, t_list **b, t_insert tmp)
{
	while (tmp.n_ra--)
		ft_instruction(a, b, "ra");
	while (tmp.n_rrb--)
		ft_instruction(a, b, "rrb");
}

void	do_rrarb(t_list **a, t_list **b, t_insert tmp)
{
	while (tmp.n_rra--)
		ft_instruction(a, b, "rra");
	while (tmp.n_rb--)
		ft_instruction(a, b, "rb");
}

void	do_rabr(t_list **a, t_list **b, t_insert tmp)
{
	while (tmp.n_rr--)
		ft_instruction(a, b, "rr");
	while (tmp.n_ra--)
		ft_instruction(a, b, "ra");
	while (tmp.n_rb--)
		ft_instruction(a, b, "rb");
}

void	do_rrabr(t_list **a, t_list **b, t_insert tmp)
{
	while (tmp.n_rrr--)
		ft_instruction(a, b, "rrr");
	while (tmp.n_rra--)
		ft_instruction(a, b, "rra");
	while (tmp.n_rrb--)
		ft_instruction(a, b, "rrb");
}