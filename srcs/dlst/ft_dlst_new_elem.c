#include "ft_dlst.h"
#include "ft_mem.h"

t_dlst_elem	*ft_dlst_new_elem(void *data)
{
	t_dlst_elem *new;

	if (!(new = (t_dlst_elem*)ft_memalloc(sizeof(t_dlst_elem*))))
		return (0);
	new->data = data;
	return (new);
}