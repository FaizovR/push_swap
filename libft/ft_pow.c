#include "libft.h"

unsigned long long	ft_pow(unsigned long long nb, int pow)
{
	if (pow == 0)
		return (1);
	else
		return (nb * ft_pow(nb, pow - 1));
}
