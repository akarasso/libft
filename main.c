/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 07:03:21 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/16 13:56:42 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	char		*line = 0;
	int			fd1;
	int			fd2;
	int			fd3;
	int			i = 0;
	int			l = 0;

	if (argc == 2)
	{
		int fd = open(argv[1], O_RDONLY);
		printf("FD %d\n", fd);
		while (get_next_line(fd, &line) > 0)
		{
			printf("Ligne%s\n", line);
			i++;
			ft_strdel(&line);
		}
		printf("Nombre de ligne %d\n", i);
	}
	if (argc == 3)
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		printf("FD1 == %d\n", fd1);
		printf("FD2 == %d\n", fd2);
		while (get_next_line(fd1, &line) > 0)
		{
			//printf("%s\n", line);
			ft_strdel(&line);
		}
		while (get_next_line(fd2, &line) > 0)
		{
			//printf("%s\n", line);
			ft_strdel(&line);
		}
	}
	if (argc == 4)
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		fd3 = open(argv[3], O_RDONLY);
		while (get_next_line(fd1, &line) > 0)
		{
			printf("%s\n", line);
			ft_strdel(&line);
		}
		while (get_next_line(fd2, &line) > 0)
		{
			printf("%s\n", line);
			ft_strdel(&line);
		}
		while (get_next_line(fd3, &line) > 0)
		{
			printf("%s\n", line);
			ft_strdel(&line);
		}
	}
	return (0);
}
