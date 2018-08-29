#include "ft_dlst.h"

t_dlst_elem	*ft_dlst_getlast(t_dlst_elem *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}