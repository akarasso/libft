#include "libft.h"

int		ft_strtab_add(char ***arr, char *new)
{
	int		len;
	char	**newtab;

	if (!*arr)
		return (0);
	len = ft_strtab_len(*arr);
	if (!new)
		return (0);
	if (!(newtab = ft_strtab_realloc(arr, len + 1)))
	{
		ft_strtab_del(&newtab);
		return (0);
	}
	*arr = newtab;
	newtab[len] = new;
	return (1);
}
