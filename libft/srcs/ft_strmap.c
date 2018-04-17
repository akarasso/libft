/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:54:12 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 17:54:14 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	char *ptr;

	if (f && s)
	{
		if (!(new = (char*)ft_memalloc(ft_strlen(s) + 1)))
			return (0);
		ptr = new;
		while (*s)
		{
			*ptr = f(*s);
			s++;
			ptr++;
		}
		return (new);
	}
	return (0);
}
