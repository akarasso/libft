/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:41:42 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 09:01:08 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"

unsigned int	ft_dlst_len(t_dlist *container)
{
	unsigned int	len;
	t_dlist_elem	*ptr;

	if (container)
	{
		len = 0;
		ptr = container->first;
		while (ptr)
		{
			len++;
			ptr = ptr->next;
		}
	}
	return (len);
}
