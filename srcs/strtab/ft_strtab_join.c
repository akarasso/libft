#include "libft.h"

char	*ft_strtab_join(char **tab, char *key)
{
	char *res;

	res = ft_strdup(*tab);
	tab++;
	while (*tab)
	{
		res =ft_3strjoinfree(res, key, *tab, 0);
		tab++;
	}
	return (res);
}
