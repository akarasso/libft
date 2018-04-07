/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 07:03:21 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/07 13:50:44 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	char		*line;
	int			fd;
	int			ret;
	int			count_lines;
	char		*filename;

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd > 2 && argc)
	{
		count_lines = 0;
		line = NULL;
		while ((ret = get_next_line(fd, &line)) > 0)
		{
			printf("%s\n", line);
			count_lines++;
		}
		close(fd);
		//printf("Nombre de lignes lu %d", count_lines);
	}
	else
		printf("An error occured while opening file %s\n", filename);
	return (0);
}
