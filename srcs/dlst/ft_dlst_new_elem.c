#include "ft_dlst.h"
#include "ft_mem.h"

t_dlist_elem	*ft_dlst_new_elem(void *data)
{
	t_dlist_elem *new;

	if (!(new = (t_dlist_elem*)ft_memalloc(sizeof(t_dlist_elem*))))
		return (0);
	new->data = data;
	return (new);
}