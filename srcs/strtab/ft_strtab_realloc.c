#include "ft_strtab.h"
#include "ft_mem.h"

char	**ft_strtab_realloc(char ***src, int len)
{
	char **new;

	if (!(new = ft_strtab_new(len)))
		return (0);
	ft_strtab_cpy(*src, new);
	free(*src);
	*src = 0;
	return (new);
}