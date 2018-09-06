#include "libft.h"

static void	btree_add(t_btree *ptr, int (*func_cmp)(void*,void*), t_btree *new)
{
	int ret;

	ret = func_cmp(ptr->data, new->data);
	if (ret <= 0)
	{
		if (ptr->left)
			btree_add(ptr->left, func_cmp, new);
		else
			ptr->left = new;
	}
	else
	{
		if (ptr->right)
			btree_add(ptr->right, func_cmp, new);
		else
			ptr->right = new;
	}
}

t_btree	*ft_btree_push(t_btree **tree, int (*func_cmp)(void*,void*), void *data)
{
	t_btree *new;

	if (!(new = ft_btree_new(data)))
		return (0);
	if (!*tree)
		*tree = new;
	else
		btree_add(*tree, func_cmp, new);
	return (new);
}