/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:53:43 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 17:53:44 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new;

	if (!s1 || !s2)
		return (0);
	new = (char*)ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (0);
	new = ft_strcpy(new, s1);
	new = ft_strcat(new, s2);
	return (new);
}
