/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_iter_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:09:53 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/30 07:32:40 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lst_iter_data(t_lst *container, void (*exec_func)(void *elem))
{
	t_lst_elem *ptr;

	if (!container || !container->first)
		return ;
	ptr = container->first;
	while (ptr)
	{
		exec_func(ptr->data);
		ptr = ptr->next;
	}
}
