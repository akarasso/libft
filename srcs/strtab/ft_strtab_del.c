#include "ft_strtab.h"
#include "ft_mem.h"
#include "ft_str.h"

void	ft_strtab_del(char ***tab)
{
	int		i;
	char	**ptr;

	if (tab && *tab)
	{
		ptr = *tab;
		i = 0;
		while (ptr[i])
		{
			ft_strdel(&ptr[i]);
			i++;
		}
		free(ptr);
		*tab = 0;
	}
}