#ifndef BTREE_H
# define BTREE_H

# include "ft_mem.h"

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*data;
}				t_btree;

void		*ft_btree_find(t_btree *tree, int (*func)(void*,void*), void *arg);
t_btree		*ft_btree_new(void *content);
t_btree		*ft_btree_push(t_btree **tree, int (*func_cmp)(void*,void*), void *data);

#endif
