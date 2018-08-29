#include "ft_mem.h"

char	**ft_strtab_new(int len)
{
	char	**new;

	if (!(new = (char**)ft_memalloc(sizeof(char*) * (len + 1))))
		return (0);
	return (new);
}