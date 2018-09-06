#include "libft.h"

void	*ft_btree_find(t_btree *tree, int (*func)(void*,void*), void *arg)
{
	int		ret;

	if (!tree)
		return (0);
	ret = func(tree->data, arg);
	if (!ret)
		return (tree->data);
	else if (ret <= 0)
		return ft_btree_find(tree->left, func, arg);
	else
		return ft_btree_find(tree->right, func, arg);
}