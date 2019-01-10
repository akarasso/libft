#include "libft.h"

char	*ft_strtab_join(char **arr, char *key)
{
	char *res;

	res = ft_strdup(*arr);
	arr++;
	while (*arr)
	{
		res =ft_3strjoinfree(res, key, *arr, 0);
		arr++;
	}
	return (res);
}
