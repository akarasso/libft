/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 07:03:21 by akarasso          #+#    #+#             */
/*   Updated: 2018/04/06 15:54:12 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int		main(int argc, char **argv)
{
	char        *line;
	int         fd;
	int         ret;
	char        *filename;

	if (argc == 1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd > 2)
	{
		printf("FD : %d\n", fd);
		if (close(fd) == 0)
		{
			printf("FD closed : %d\n", fd);
			line = NULL;
			ret = get_next_line(fd, &line);
			if (ret != -1)
				printf("-> must have returned '-1' when receiving a closed file descriptor\n");
			else
				printf("OK\n");
		}
		else
		{
			printf("An error occured while closing file descriptor associated with file %s\n", filename);
			return (0);
		}
	}
	return (0);
}
