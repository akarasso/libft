/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:03:37 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/05 15:37:12 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"
#include "ft_mem.h"

void	ft_dlst_del(t_dlst **container, void (*del_elem_func)(t_dlst_elem *))
{
	t_dlst_elem	*ptr;
	t_dlst_elem	*tmp;

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
				free(ptr);
				ptr = tmp;
			}
		}
		free(*container);
		*container = 0;
	}
}
