/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:36:36 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/29 07:29:08 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"
#include "ft_mem.h"

t_lst	*ft_lst_new(void *content)
{
	t_lst *new;

	if (!(new = (t_lst*)ft_memalloc(sizeof(*new))))
		return (0);
	if (content)
	{
		new->first = content;
		new->len = ft_lst_len(new);
	}
	return (new);
}
