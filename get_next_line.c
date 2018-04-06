/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 06:56:58 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/06 16:52:38 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static char		*buffconcat(char *dest, char *buff, int size)
{
	char *tmp;

	if (!dest)
	{
		dest = ft_strnew(BUFF_SIZE);
		dest = ft_strncat(dest, buff, size);
	}
	else
	{
		tmp = (char*)ft_memalloc(ft_strlen(dest) + BUFF_SIZE + 1);
		if (!tmp)
			return (0);
		tmp = ft_strcpy(tmp, dest);
		tmp = ft_strncat(tmp, buff, size);
		free(dest);
		dest = tmp;
	}
	return (dest);
}


static int		fill(char **line, char **rd, char **p)
{
	*line = ft_strnew(*p - *rd);
	*line = ft_strncpy(*line, *rd, *p - *rd);
	*rd = ft_memmove(*rd, *p + 1, ft_strlen(*rd));
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char *rd = 0;
	static char	*p = 0;
	int			ret;
	char		buff[BUFF_SIZE];

	if (fd == -1)
		return (-1);
	if (rd && (p = ft_strchr(rd, '\n')) && ((fill(line, &rd, &p))))
	{
		p = ft_strchr(buff, '\n');
		return (1);
	}
	else
	{
		if ((ret = read(fd, buff, BUFF_SIZE)))
		{
			if (ret == -1)
				return (-1);
			rd = buffconcat(rd, buff, ret);
			if (get_next_line(fd, line))
				return (1);
		}
	}
	if (*rd != 0 && (p = ft_strchr(rd, '\0')) && ((fill(line, &rd, &p))))
	{
		*rd = 0;
		return (1);
	}
	return (0);
}
