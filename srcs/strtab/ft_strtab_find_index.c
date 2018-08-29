#include "ft_strtab.h"

int		ft_strtab_find_index(char **tab, char *value)
{
	int i;

	i = 0;
	if (!tab)
		return (-1);
	while (tab[i])
	{
		if (!ft_strcmp(tab[i], value))
			return (i);
		i++;
	}
	return (-1);
}
