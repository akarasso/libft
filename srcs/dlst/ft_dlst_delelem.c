#include "ft_dlst.h"
#include "ft_mem.h"

void	ft_dlst_delelem(t_dlst_elem **elem, void(*f)(void **data))
{
	if (elem && *elem)
	{
		// f(&(*elem)->data);
		free(*elem);
		*elem = 0;
	}
}