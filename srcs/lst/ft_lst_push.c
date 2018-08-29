/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:05:51 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 08:17:12 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int					ft_lst_push(t_lst *container, void *data)
{
	t_lst_elem	*new;
	t_lst_elem	*ptr;

	if (!data || !(new = ft_lst_new_elem(data)))
		return (0);
	ptr = container->first;
	if (!ptr)
		container->first = new;
	else
	{
		new->next = container->first;
		container->first = new;
	}
	container->len++;
	return (1);
}
