/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultoa.c                                          :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <gjenkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:16:45 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 18:18:25 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_longlen(unsigned long long n)
{
	int		i;

	i = 0;
	if (n == 0)
		return (1);
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char		*ft_ultoa(unsigned long long nbr)
{
	char	*s;
	int		i;
	long	div;

	div = 1;
	i = ft_longlen(nbr);
	s = (char*)malloc(sizeof(char) * (i + 1));
	s[i] = '\0';
	while (--i >= 0)
	{
		s[i] = (nbr / div % 10) + '0';
		div *= 10;
	}
	return (s);
}
