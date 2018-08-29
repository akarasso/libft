#include "ft_lst.h"

t_lst_elem	*ft_lst_getlast(t_lst_elem *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}