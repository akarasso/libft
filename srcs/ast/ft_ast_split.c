#include "ft_ast.h"

int		ft_ast_split(t_ast_node *node, t_dlst_elem *lst)
{
	node->right = ft_ast_new(node->token);
	node->left = ft_ast_new(lst->next);
	node->token = lst;
	ft_dlst_cut(lst, BEFORE | AFTER);
	return (1);
}
