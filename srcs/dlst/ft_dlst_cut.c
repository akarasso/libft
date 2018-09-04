#include "ft_dlst.h"

void	ft_dlst_cut(t_dlst_elem *lst, char flag)
{
	if ((flag & BEFORE) && lst->prev)
	{
		lst->prev->next = 0;
		lst->prev = 0;
	}
	if ((flag & AFTER) && lst->next)
	{
		lst->next->prev = 0;
		lst->next = 0;	
	}
}