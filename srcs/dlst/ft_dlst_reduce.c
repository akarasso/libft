/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_reduce.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:09:53 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/31 05:31:41 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

void	ft_dlst_reduce(t_dlst *container, void (*exec_func)(t_dlst_elem *, void*), void *arg)
{
	t_dlst_elem *ptr;

	if (!container || !container->first)
		return ;
	ptr = container->first;
	while (ptr)
	{
		exec_func(ptr, arg);
		ptr = ptr->next;
	}
}
