#include "ft_strtab.h"

char	**ft_strtab_dup(char **src)
{
	char	**new;
	int		len;

	len = ft_strtab_len(src);
	if (!(new = ft_strtab_new(len)))
		return (0);
	ft_strtab_cpy(src, new);
	return (new);
}
