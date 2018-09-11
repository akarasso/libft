/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoax <hoax@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:53:43 by akarasso          #+#    #+#             */
/*   Updated: 2018/08/27 06:15:00 by hoax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		len;

	len = (s1) ? ft_strlen(s1) : 0;
	len += (s2) ? ft_strlen(s2) : 0;
	if (!(new = ft_strnew(len)))
		return (0);
	if (s1)
		new = ft_strcat(new, s1);
	if (s2)
		new = ft_strcat(new, s2);
	return (new);
}
