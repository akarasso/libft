/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 06:56:58 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/07 13:28:14 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static void			buffconcat(t_cbuffer **c, char *buff, int size)
{
	char		*tmp;
	t_cbuffer	*canal;

	canal = *c;
	if (!canal->rd)
	{
		canal->rd = ft_strnew(size);
		canal->rd = ft_strncat(canal->rd, buff, size);
	}
	else
	{
		tmp = (char*)ft_memalloc(ft_strlen(canal->rd) + size + 1);
		if (!tmp)
			return ;
		tmp = ft_strcpy(tmp, canal->rd);
		tmp = ft_strncat(tmp, buff, size);
		free(canal->rd);
		canal->rd = tmp;
	}
}

static int			fill(char **line, t_cbuffer **c, char *p)
{
	t_cbuffer *canal;

	canal = *c;
	if (p)
	{
		*line = ft_strnew(p - canal->rd);
		*line = ft_strncpy(*line, canal->rd, p - canal->rd);
		canal->rd = ft_memmove(canal->rd, p + 1, ft_strlen(canal->rd));
		return (1);
	}
	return (0);
}

static t_cbuffer	*get_buffer_canal(t_cbuffer *lst, const int fd)
{
	if (lst)
	{
		if (lst->fd == fd)
			return (lst);
		while (lst->next)
		{
			if (lst->fd == fd)
				return (lst);
			lst = lst->next;
		}
		lst->next = (t_cbuffer*)malloc(sizeof(*lst));
		lst = lst->next;
		lst->next = 0;
		lst->fd = fd;
		lst->rd = 0;
	}
	else
	{
		lst = (t_cbuffer*)malloc(sizeof(*lst));
		lst->next = 0;
		lst->fd = fd;
		lst->rd = 0;
	}
	return (lst);
}

int					get_next_line(const int fd, char **line)
{
	static t_cbuffer	*buffs = 0;
	t_cbuffer			*cnl;
	int					ret;
	char				buff[BUFF_SIZE];

	if (fd == -1)
		return (-1);
	if ((cnl = get_buffer_canal(buffs, fd)) && !buffs)
		buffs = cnl;
	if (cnl->rd && ((fill(line, &cnl, ft_strchr(cnl->rd, '\n')))))
		return (1);
	else
	{
		if ((ret = read(fd, buff, BUFF_SIZE)))
		{
			if (ret == -1)
				return (-1);
			buffconcat(&cnl, buff, ret);
			if (get_next_line(fd, line))
				return (1);
		}
	}
	if (cnl->rd && *cnl->rd && ((fill(line, &cnl, ft_strchr(cnl->rd, '\0')))))
		return (1);
	return (0);
}
