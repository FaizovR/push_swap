/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <gjenkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:24:17 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 15:02:01 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *ptr;
	char symb;

	symb = (char)c;
	ptr = 0;
	while (*s)
		if (*s++ == symb)
			ptr = (char*)(s - 1);
	return (*s == symb ? (char*)s : ptr);
}
