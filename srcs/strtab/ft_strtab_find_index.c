#include "ft_strtab.h"

int		ft_strtab_find_index(char **arr, char *value)
{
	int i;

	i = 0;
	if (!arr)
		return (-1);
	while (arr[i])
	{
		if (!ft_strcmp(arr[i], value))
			return (i);
		i++;
	}
	return (-1);
}
