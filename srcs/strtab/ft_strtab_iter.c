#include "libft.h"

void ft_strtab_iter(char **tab, void (*func)(char *, void *), void *data)
{
	while (*tab)
	{
		func(*tab, data);
		tab++;
	}
}
