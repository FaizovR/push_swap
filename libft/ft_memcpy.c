/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 00:10:13 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 15:02:01 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_buf;
	unsigned char	*src_buf;

	if (!dst && !src)
		return (0);
	dst_buf = (unsigned char*)dst;
	src_buf = (unsigned char*)src;
	while (n-- > 0)
		*(dst_buf++) = *(src_buf++);
	return ((void*)dst);
}
