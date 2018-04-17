/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 20:03:37 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/04 15:24:46 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *alst;
	while (tmp)
	{
		tmp2 = tmp->next;
		ft_lstdelone(&tmp, del);
		tmp = tmp2;
	}
	*alst = 0;
}
