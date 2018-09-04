#include "ft_dlst.h"
#include "ft_mem.h"

void	ft_dlst_clr(t_dlst *container, void (*f)(void *))
{
	t_dlst_elem *elem;
	t_dlst_elem *tmp;

	elem = container->first;
	while (elem)
	{
		tmp = elem->next;
		f(elem->data);
		free(elem);
		elem = tmp;
	}
	container->first = 0;
	container->last = 0;
	container->len = 0;
}