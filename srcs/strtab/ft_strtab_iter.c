#include "libft.h"

void ft_strtab_iter(char **arr, void (*func)(char *, void *), void *data)
{
	while (*arr)
	{
		func(*arr, data);
		arr++;
	}
}
