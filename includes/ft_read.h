#ifndef FT_READ_H
# define FT_READ_H

# define GNL_BUFF_SIZE 1

# include <unistd.h>
# include <dirent.h>

typedef struct	s_cbuffer
{
	int					fd;
	char				buff[GNL_BUFF_SIZE + 1];
	struct s_cbuffer	*next;
}				t_cbuffer;

int				get_next_line(const int fd, char **line);
int				ft_readdir(char *path, char ***res, int depth);

#endif
