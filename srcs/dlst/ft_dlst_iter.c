/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_iter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:09:53 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/02 07:31:57 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlst_iter(t_dlst *container, void (*exec_func)(t_dlst_elem *elem))
{
	t_dlst_elem *ptr;

	if (!container || !container->first)
		return ;
	ptr = container->first;
	while (ptr)
	{
		exec_func(ptr);
		ptr = ptr->next;
	}
}
