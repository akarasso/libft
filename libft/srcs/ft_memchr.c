/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:50:11 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/04 11:46:19 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *d1, int c, size_t n)
{
	unsigned char	*mem;
	unsigned char	value;

	value = (unsigned char)c;
	mem = (unsigned char *)d1;
	while (n > 0)
	{
		if (*mem == value)
			return ((void*)mem);
		mem++;
		n--;
	}
	return (0);
}
