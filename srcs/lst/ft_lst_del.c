/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_del.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:03:37 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 07:48:05 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"
#include "ft_mem.h"

void	ft_lst_del(t_lst **container, void (*del_elem_func)(void *))
{
	t_lst_elem	*ptr;
	t_lst_elem	*tmp;

	if (container && *container)
	{
		ptr = (*container)->first;
		if (ptr)
		{
			while (ptr)
			{
				tmp = ptr->next;
				if (del_elem_func)
					del_elem_func(ptr);
				ptr = tmp;
			}
		}
		free(*container);
		*container = 0;
	}
}
