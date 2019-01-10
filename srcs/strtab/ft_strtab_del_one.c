#include "ft_mem.h"
#include "ft_str.h"

void	ft_strtab_del_one(char **arr, int index)
{
	free(arr[index]);
	index++;
	while (arr[index])
	{
		arr[index - 1] = arr[index];
		index++;
	}
	arr[index - 1] = 0;
}
