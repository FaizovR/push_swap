/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <gjenkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:26:28 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/17 10:57:07 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	if ((result = ft_strnew(ft_strlen(s))))
	{
		i = 0;
		while (s[i])
		{
			result[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (result);
}
