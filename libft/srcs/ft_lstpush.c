/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 15:58:58 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/04 18:32:55 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **list, t_list *elem)
{
	t_list *tmp;

	tmp = *list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = elem;
	}
	else
		*list = elem;
}
