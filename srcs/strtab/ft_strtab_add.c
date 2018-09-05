#include "ft_strtab.h"

int		ft_strtab_add(char ***tab, char *new)
{
	int		len;
	char	**newtab;

	if (!tab)
		return (0);
	if (!*tab && !(*tab = ft_strtab_new(0)))
		return (0);
	len = ft_strtab_len(*tab);
	if (!new)
		return (0);
	if (!(newtab = ft_strtab_realloc(tab, len + 1)))
		return (0);
	*tab = newtab;
	newtab[len] = new;
	return (1);
}