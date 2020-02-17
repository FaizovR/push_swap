/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 23:07:22 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 15:02:01 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	res;
	unsigned long	fi;
	short			sign;

	res = 0;
	fi = (unsigned long)(FT_LONG_MAX / 10);
	while (ft_isspaces(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		str++;
	while (ft_isdigit(*str))
	{
		if ((res > fi || (res == fi && ft_ctoi(*str) > 7)) && sign == 1)
			return (-1);
		else if ((res > fi || (res == fi && ft_ctoi(*str) > 8)) && sign == -1)
			return (0);
		res = res * 10 + ft_ctoi(*str++);
	}
	return ((int)(res * sign));
}
