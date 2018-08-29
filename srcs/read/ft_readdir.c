#include "ft_read.h"
#include "ft_str.h"
#include "ft_strtab.h"
#include "ft_mem.h"

static char	*get_formated_path(char *path, char *name)
{
	char	*ptr;

	ptr = 0;
	if (path)
		ptr = ft_3strjoinfree(path, "/", name, 0);
	else
		ptr = ft_strdup(name);
	return (ptr);
}

int		ft_readdir(char *path, char ***res, int depth)
{
	struct dirent	*info;
	DIR				*dir;
	char			*ptr;

	dir = (!path) ? opendir("./") : opendir(path);
	if (dir)
	{
		while ((info = readdir(dir)))
		{
			if ((info->d_type & DT_DIR) && depth)
			{
				if (!(ptr = get_formated_path(path, info->d_name))
					|| !(ft_readdir(ptr, res, depth - 1)))
					return (0);
			}
			else if (!depth)
			{
				if (!(ptr = get_formated_path(path, info->d_name)))
					return (0);
				ft_strtab_add(res, ptr);
			}
		}
	}
	ft_strdel(&path);
	return (1);
}