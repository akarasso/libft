#include "ft_strtab.h"

int		ft_strtab_findn_index(char **tab, char *value)
{
	int i;

	i = 0;
	if (!tab)
		return (-1);
	while (tab[i])
	{
		if (!ft_strncmp(tab[i], value, ft_strlen(tab[i])))
			return (i);
		i++;
	}
	return (-1);
}
