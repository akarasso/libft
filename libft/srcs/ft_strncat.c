/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:54:46 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 17:54:47 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char *d;

	d = dest;
	while (*d)
		d++;
	while (*src && n > 0)
	{
		*d = *src;
		d++;
		src++;
		n--;
	}
	*d = '\0';
	return (dest);
}
