/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_delif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:48:41 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 09:07:05 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"
#include "ft_mem.h"

static void	ft_del_delif_exec(t_dlst *container, t_dlst_elem **tmp, t_dlst_elem **ptr, void (*del)(void *))
{
	t_dlst_elem	*tmp2;

	if (*tmp)
	{
		(*tmp)->next = (*ptr)->next;
		if ((*ptr)->next)
			(*ptr)->next->prev = (*tmp);
	}
	else
	{
		container->first = (*ptr)->next;
		if (container->first)
			((t_dlst_elem*)container->first)->prev = 0;
	}
	tmp2 = *ptr;
	(*ptr) = (*ptr)->next;
	if (del)
		del(tmp2);
	container->len--;
}

void		ft_dlst_delif(t_dlst *container, int (*delif_func)(void *), void (*del)(void *))
{
	t_dlst_elem		*ptr;
	t_dlst_elem		*tmp;

	tmp = 0;
	ptr = container->first;
	while (ptr)
	{
		if (delif_func(ptr->data))
			ft_del_delif_exec(container, &tmp, &ptr, del);
		else
		{
			tmp = ptr;
			ptr = ptr->next;
		}
	}
	if (!container->len)
		container->last = 0;
}
