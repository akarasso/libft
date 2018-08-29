/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:36:36 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/29 07:31:25 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"
#include "ft_mem.h"

t_dlst	*ft_dlst_new(void *content)
{
	t_dlst *new;

	if (!(new = (t_dlst*)ft_memalloc(sizeof(*new))))
		return (0);
	if (content)
	{
		new->first = content;
		new->last = ft_dlst_getlast(content);
		new->len = ft_dlst_len(new);
	}
	return (new);
}
