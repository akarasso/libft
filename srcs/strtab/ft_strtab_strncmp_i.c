#include "ft_strtab.h"

int		ft_strtab_strncmp_i(char **arr, char *value)
{
	int i;
	int last;

	i = 0;
	if (!arr)
		return (-1);
	last = -1;
	while (arr[i])
	{
		if (!ft_strncmp(arr[i], value, ft_strlen(arr[i])))
			last = i;
		i++;
	}
	return (last);
}
