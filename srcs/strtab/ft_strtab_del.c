#include "ft_strtab.h"
#include "ft_mem.h"
#include "ft_str.h"

void	ft_strtab_del(char ***arr)
{
	int		i;
	char	**ptr;

	if (arr && *arr)
	{
		ptr = *arr;
		i = 0;
		while (ptr[i])
		{
			ft_strdel(&ptr[i]);
			i++;
		}
		free(ptr);
		*arr = 0;
	}
}
