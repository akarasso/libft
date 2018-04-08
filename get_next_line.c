/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 06:56:58 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/08 19:24:46 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

static void			ft_move(char *begin, char *end)
{
	while (*end)
	{
		*begin = *end;
		end++;
		begin++;
	}
	*begin = 0;
}

static int			buff_concat(char **line, t_cbuffer *cnl, char c)
{
	char	*pos;
	char	*new;

	pos = ft_strchr(cnl->buff, c);
	if (pos)
	{
		new = ft_strnew(ft_strlen(*line) + pos - cnl->buff);
		ft_strcpy(new, *line);
		ft_strncat(new, cnl->buff, pos - cnl->buff);
		ft_move(cnl->buff, pos + 1);
		ft_strdel(line);
		*line = new;
		return (1);
	}
	else
	{
		new = ft_strjoin(*line, cnl->buff);
		ft_strdel(line);
		*line = new;
		ft_strclr(cnl->buff);
		return (0);
	}
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
		lst->next = (t_cbuffer*)ft_memalloc(sizeof(*lst));
		lst->next->next = 0;
		lst->next->fd = fd;
		lst->next->buff[0] = 0;
		lst = lst->next;
	}
	else
	{
		lst = (t_cbuffer*)ft_memalloc(sizeof(*lst));
		lst->next = 0;
		lst->fd = fd;
		lst->buff[0] = 0;
	}
	return (lst);
}

int					get_next_line(const int fd, char **line)
{
	static t_cbuffer	*buffs = 0;
	t_cbuffer			*cnl;
	int					ret;
	int					len;

	if (fd == -1 || !line || BUFF_SIZE < 1)
		return (-1);
	ft_strdel(line);
	*line = ft_strnew(0);
	if ((cnl = get_buffer_canal(buffs, fd)) && !buffs)
		buffs = cnl;
	len = ft_strlen(cnl->buff);
	if (len > 0)
		buff_concat(line, cnl, '\n');
	while ((ret = read(cnl->fd, cnl->buff, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		cnl->buff[ret] = 0;
		if (buff_concat(line, cnl, '\n'))
			return (1);
	}
	if (line && *line && ft_strlen(*line))
		return (1);
	return (0);
}
