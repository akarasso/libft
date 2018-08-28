/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 19:36:36 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 08:05:23 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"
#include "ft_mem.h"

t_list	*ft_lst_new(void *content)
{
	t_list *new;

	if (!(new = (t_list*)ft_memalloc(sizeof(*new))))
		return (0);
	if (content)
		ft_lst_push(new, content);
	return (new);
}
