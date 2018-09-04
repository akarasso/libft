/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:05:51 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/30 05:43:32 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

t_dlst_elem		*ft_dlst_push(t_dlst *container, void *data)
{
	t_dlst_elem	*new;
	t_dlst_elem	*ptr;

	if (!data || !(new = ft_dlst_new_elem(data)))
		return (0);
	ptr = container->first;
	if (!ptr)
		container->first = new;
	else
	{
		new->next = container->first;
		((t_dlst_elem*)container->first)->prev = new;
		container->first = new;
	}
	container->len++;
	return (new);
}
