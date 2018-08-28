/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:49:58 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 06:46:34 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char *schar;
	unsigned char x;

	schar = (unsigned char*)src;
	ptr = (unsigned char*)dest;
	x = (unsigned char)c;
	while (n > 0)
	{
		*ptr = *schar;
		if (*schar == x)
			return (ptr + 1);
		schar++;
		ptr++;
		n--;
	}
	return (NULL);
}
