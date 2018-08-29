/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:48:41 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 08:29:18 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"
#include "ft_mem.h"

static void	ft_del_delif_exec(t_lst *container, t_lst_elem **tmp, t_lst_elem **ptr, void (*del)(void *))
{
	t_lst_elem		*tmp2;

	if (*tmp)
		(*tmp)->next = (*ptr)->next;
	else
		container->first = (*ptr)->next;
	tmp2 = *ptr;
	(*ptr) = (*ptr)->next;
	if (del)
		del(tmp2);
	container->len--;
}

void		ft_lst_delif(t_lst *container, int (*delif_func)(void *), void (*del)(void *))
{
	t_lst_elem		*ptr;
	t_lst_elem		*tmp;

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
