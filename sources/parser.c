#include "../includes/push_swap.h"

void ft_is_valid_str (const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(ft_isdigit(str[i]) || ft_isspaces(str[i]) || str[i] == '-' || str[i] == '+'))
		{
			ft_putstr("Error\n");
			exit(0);
		}
		i++;
	}
}

void ft_parser (int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
		ft_is_valid_str(av[i]);
}

