#ifndef FT_AST_H
# define FT_AST_H

# include "ft_dlst.h"
# include "ft_mem.h"
# include <stdio.h>


typedef struct	s_ast_node
{
	t_dlst_elem			*token;
	struct s_ast_node	*left;
	struct s_ast_node	*right;
}				t_ast_node;

t_ast_node	*ft_ast_new(t_dlst_elem *lst);
int			ft_ast_split(t_ast_node *node, t_dlst_elem *lst);
int			ft_ast_rsplit(t_ast_node *node, t_dlst_elem *lst);

#endif
