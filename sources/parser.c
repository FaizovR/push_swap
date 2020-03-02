#include "../includes/push_swap.h"

void	ft_is_valid_str(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '-' && !ft_isdigit(str[i + 1])))
			ft_handle_error();
		if ((str[i] == '+' && !ft_isdigit(str[i + 1])))
			ft_handle_error();
		if (!ft_isdigit(str[i]) && !ft_isspaces(str[i]) &&
		str[i] != '+' && str[i] != '-')
			ft_handle_error();
		i++;
	}
}

void	ft_parser(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
		ft_is_valid_str(av[i]);
}
