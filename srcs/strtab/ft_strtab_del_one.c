#include "ft_mem.h"
#include "ft_str.h"

void	ft_strtab_del_one(char **tab, int index)
{
	free(tab[index]);
	index++;
	while (tab[index])
	{
		tab[index - 1] = tab[index];
		index++;
	}
	tab[index - 1] = 0;
}