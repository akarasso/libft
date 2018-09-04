/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_reduce_data.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:09:53 by akarasso          #+#    #+#             */
/*   Updated: 2018/09/02 07:11:40 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlst_reduce_data(t_dlst *container, void (*exec_func)(void *, void*), void *arg)
{
	t_dlst_elem *ptr;

	if (!container || !container->first)
		return ;
	ptr = container->first;
	while (ptr)
	{
		exec_func(ptr->data, arg);
		ptr = ptr->next;
	}
}

void	ft_dlstelem_reduce_data(t_dlst_elem *elem, void (*exec_func)(void *, void*), void *arg)
{
	if (!elem)
		return ;
	while (elem)
	{
		exec_func(elem->data, arg);
		elem = elem->next;
	}
}
