/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 17:13:21 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/04 18:33:51 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *s)
{
	char	*srev;
	char	*ret;
	int		len;

	len = strlen(s);
	if (!(srev = (char *)ft_memalloc(len + 1)))
		return (0);
	ret = srev;
	while (--len > -1)
	{
		*srev = s[len];
		srev++;
	}
	return (ret);
}
