/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 07:04:41 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/16 12:17:39 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 4096
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_cbuffer
{
	int					fd;
	char				buff[BUFF_SIZE + 1];
	struct s_cbuffer	*next;
}				t_cbuffer;

int				get_next_line(const int fd, char **line);

#endif
