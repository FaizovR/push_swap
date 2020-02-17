/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjenkins <gjenkins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 14:56:58 by gjenkins          #+#    #+#             */
/*   Updated: 2019/09/15 14:56:58 by gjenkins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush_back(t_list **alst, t_list *new)
{
	t_list *list;

	if (alst)
	{
		if (!*alst)
			*alst = new;
		else
		{
			list = (*alst);
			while ((*list).next)
				list = (*list).next;
			(*list).next = new;
		}
	}
}
