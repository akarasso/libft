/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 07:03:21 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/13 17:19:31 by akarasso         ###   ########.fr       */
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

int fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
		ft_strdel(&line);
	}
	ft_strdel(&line);
	/*if (argc == 2)
	{
		fd1 = open(argv[1], O_RDONLY);
		get_next_line(fd1, &line);
		printf("1:%d\n", strcmp(line, "1234567"));
		free(line);
		line = 0;
		get_next_line(fd1, &line);
		printf("2:%d\n", strcmp(line, "abcdefg"));
		while ((get_next_line(fd1, &line)) > 0)
		{
			printf("%s\n", line);
			l++;
			if (l > 50)
				break;
		}
		printf("Nombre de ligne %d\n", l);
	}
	if (argc == 4)
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		fd3 = open(argv[3], O_RDONLY);
		while (i < 50)
		{
			if (i % 3 == 0)
			{
				get_next_line(fd1, &line);
				printf("%d:%s\n", fd1, line);
			}
			else if(i % 3 == 1) 
			{
				get_next_line(fd2, &line);
				printf("%d:%s\n", fd2, line);
			}
			else
			{
				get_next_line(fd3, &line);
				printf("%d:%s\n", fd3, line);
			}
			i++;
			free(line);
			line = 0;
		}
	}
	if (argc == 4)
	{
		fd1 = open(argv[1], O_RDONLY);
		fd2 = open(argv[2], O_RDONLY);
		fd3 = open(argv[3], O_RDONLY);
		get_next_line(fd1, &line);
		get_next_line(fd2, &line);
		get_next_line(fd3, &line);
		printf("===========\n");
		get_next_line(fd1, &line);
		get_next_line(fd2, &line);
		get_next_line(fd3, &line);
	}*/
	return (0);
}
