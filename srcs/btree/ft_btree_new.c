#include "ft_btree.h"

t_btree		*ft_btree_new(void *content)
{
	t_btree	*new;

	if (!(new = (t_btree*)ft_memalloc(sizeof(*new))))
		return (0);
	new->data = content;
	return (new);
}