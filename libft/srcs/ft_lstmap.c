/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:05:59 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/04 16:13:18 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(f)(t_list *elem))
{
	t_list *new;
	t_list *head;

	new = 0;
	head = 0;
	if (lst)
	{
		while (lst)
		{
			if (head)
			{
				head->next = f(lst);
				head = head->next;
			}
			else
			{
				head = f(lst);
				new = head;
			}
			lst = lst->next;
		}
	}
	return (new);
}
