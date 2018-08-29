#include "ft_ast.h"

t_ast_node	*ft_ast_new(t_dlst *lst)
{
	t_ast_node *new;

	if (!(new = (t_ast_node*)ft_memalloc(sizeof(*new))))
		return (0);
	new->token = lst;
	return (new);
}