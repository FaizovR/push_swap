/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delcontent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <gjenkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 21:03:49 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/22 21:07:13 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_delcontent(void *content, size_t content_size)
{
	if (!content)
		return ;
	ft_memdel(&content);
	(void)content_size;
}
