/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 00:04:12 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 15:02:01 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_buf;
	unsigned char	*src_buf;

	if (src >= dst)
		ft_memcpy(dst, src, len);
	else
	{
		dst_buf = (unsigned char*)dst;
		src_buf = (unsigned char*)src;
		dst_buf += len - 1;
		src_buf += len - 1;
		while (len--)
			*dst_buf-- = *src_buf--;
	}
	return (dst);
}
