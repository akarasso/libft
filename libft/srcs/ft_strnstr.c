/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:55:31 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/05 14:09:14 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	flen;

	flen = ft_strlen(find);
	i = 0;
	if (!find[i])
		return ((char*)str);
	while (*str && n >= flen)
	{
		if (*str == *find && !ft_strncmp(str, find, flen))
			return ((char*)str);
		n--;
		str++;
	}
	return (0);
}
