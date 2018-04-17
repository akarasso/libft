/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:53:06 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 17:53:08 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new;

	new = (char*)malloc(sizeof(*new) * (ft_strlen(src) + 1));
	if (!new)
		return (0);
	ft_strcpy(new, src);
	return (new);
}
