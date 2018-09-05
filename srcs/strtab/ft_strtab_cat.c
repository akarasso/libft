#include "libft.h"

void	ft_strtab_cat(char **dest, char **src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
}