#include "ft_ast.h"

int		ft_ast_split(t_ast_node *node, t_dlst_elem *lst)
{
	t_dlst	*new_lst;

	node->right = ft_ast_new(node->token);
	new_lst = ft_dlst_new(lst->next);
	node->left = ft_ast_new(new_lst);
	ft_dlst_cut(lst, BEFORE | AFTER);
	return (1);
}
