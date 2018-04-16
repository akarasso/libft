/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 06:56:58 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/16 13:56:36 by akarasso         ###   ########.fr       */
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
		if (*line)
			ft_strdel(line);
		*line = new;
		return (1);
	}
	else
	{
		new = ft_strjoin(*line, cnl->buff);
		if (*line)
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
		while (lst->next)
		{
			//printf("Test on value %d %d\n", lst->fd, fd);
			if (lst->fd == fd)
			{
				//printf("return good one\n");
				return (lst);
			}
			lst = lst->next;
		}
		if (lst->fd == fd)
			return (lst);
		lst->next = (t_cbuffer*)ft_memalloc(sizeof(*lst));
		//printf("Maillion %d point on %d\n", lst->fd, fd);
		lst = lst->next;
		lst->next = 0;
		lst->fd = fd;
		lst->buff[0] = 0;
		//printf("Create new canal for fd %d\n", lst->fd);
	}
	else
	{
		//printf("Create new list canal for fd %d\n", fd);
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

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	*line = ft_strnew(0);
	if ((cnl = get_buffer_canal(buffs, fd)) && !buffs)
	{
		buffs = cnl;
		//printf("Set static vars\n");
	}
	len = ft_strlen(cnl->buff);
	if (len > 0)
	{
		if (buff_concat(line, cnl, '\n'))
		{
			//printf("FD %p\n", cnl);
			return (1);
		}
	}
	else
	{
		//printf("EMPTY LEN %p\n", cnl);
	}
	while ((ret = read(cnl->fd, cnl->buff, BUFF_SIZE)))
	{
		if (ret < 0)
			return (-1);
		cnl->buff[ret] = 0;
		if (buff_concat(line, cnl, '\n'))
		{
			//printf("Read one line %p fd= %d\n", cnl, cnl->fd);
			//write(1, cnl->buff, ret);
			return (1);
		}
	}
	if (line && *line && ft_strlen(*line))
	{
		//printf("Vide le buffer\n");
		return (1);
	}
	return (0);
}
