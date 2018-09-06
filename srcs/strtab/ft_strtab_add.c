#include "libft.h"

int		ft_strtab_add(char ***tab, char *new)
{
	int		len;
	int		fr;
	char	**newtab;

	fr = 0;
	if (!tab)
		return (0);
	if (!*tab && !(*tab = ft_strtab_new(0)))
		return (0);
	else
		fr = 1;
	len = ft_strtab_len(*tab);
	if (!new)
		return (0);
	if (!(newtab = ft_strtab_realloc(tab, len + 1)))
		return (0);
	*tab = newtab;
	newtab[len] = new;
	if (fr)
		free(*tab);
	return (1);
}