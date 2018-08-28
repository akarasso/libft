/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_new.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:36:36 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 09:06:57 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dlst.h"
#include "ft_mem.h"

t_dlist	*ft_dlst_new(void *content)
{
	t_dlist *new;

	if (!(new = (t_dlist*)ft_memalloc(sizeof(*new))))
		return (0);
	if (content)
		ft_dlst_push(new, content);
	return (new);
}
