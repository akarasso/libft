/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:41:42 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 08:59:10 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

unsigned int	ft_lst_len(t_lst *container)
{
	unsigned int	len;
	t_lst_elem		*ptr;

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
