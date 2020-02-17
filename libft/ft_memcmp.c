/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 00:07:19 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 15:02:01 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_buf;
	unsigned char *s2_buf;

	s1_buf = (unsigned char*)s1;
	s2_buf = (unsigned char*)s2;
	while (n--)
	{
		if (*s1_buf != *s2_buf)
			return (*s1_buf - *s2_buf);
		s1_buf++;
		s2_buf++;
	}
	return (0);
}
