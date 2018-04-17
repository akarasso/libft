/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:54:19 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 18:13:32 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*new;
	char	*ptr;

	if (f && s)
	{
		index = 0;
		if (!(new = (char*)ft_memalloc(ft_strlen(s) + 1)))
			return (0);
		ptr = new;
		while (*s)
		{
			*ptr = f(index, *s);
			ptr++;
			s++;
			index++;
		}
		return (new);
	}
	return (0);
}
