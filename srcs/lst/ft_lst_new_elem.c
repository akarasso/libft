#include "ft_lst.h"
#include "ft_mem.h"

t_list_elem	*ft_lst_new_elem(void *data)
{
	t_list_elem *new;

	if (!(new = (t_list_elem*)ft_memalloc(sizeof(t_list_elem*))))
		return (0);
	new->data = data;
	return (new);
}