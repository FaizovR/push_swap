/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <gjenkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:25:08 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/17 11:33:24 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	total;

	total = (size_t)start + len;
	if (!s || (total > ft_strlen(s)))
		return (NULL);
	if ((result = ft_strnew(len)))
	{
		while (len--)
			result[len] = s[start + len];
	}
	return (result);
}
