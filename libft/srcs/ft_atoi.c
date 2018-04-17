/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 17:48:32 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/03 18:17:11 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LLONG_MAX  9223372036854775807LL

int		ft_atoi(const char *str)
{
	unsigned long long	res;
	int					neg;

	res = 0;
	neg = 1;
	while ((*str > 8 && *str < 14) || *str == ' ')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str > 47 && *str < 58)
	{
		res = res * 10 + (int)*str - 48;
		if (res > (unsigned long long)LLONG_MAX && neg == 1)
			return (-1);
		if (res > (unsigned long long)(LLONG_MAX) + 1 && neg == -1)
			return (0);
		str++;
	}
	return (res * neg);
}
