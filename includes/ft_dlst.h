#ifndef FT_DLST_H
# define FT_DLST_H

# include <stddef.h>

typedef struct	s_dlist
{
	void			*first;
	void			*last;
	unsigned int	len;
}				t_dlist;

typedef struct	s_dlist_elem
{
	struct s_dlist_elem	*next;
	struct s_dlist_elem	*prev;
	void				*data;
}				t_dlist_elem;

void			ft_dlst_del(t_dlist **container, void (*del_elem_func)(void *));
void			ft_dlst_delif(t_dlist *container, int (*delif_func)(void *), void (*del)(void *));
int				ft_dlst_push(t_dlist *container, void *data);
int				ft_dlst_pushback(t_dlist *container, void *data);
void			ft_dlst_iter(t_dlist *container, void (*exec_func)(void *elem));
unsigned int	ft_dlst_len(t_dlist *container);
t_dlist			*ft_dlst_new(void *content);
t_dlist_elem	*ft_dlst_new_elem(void *data);

#endif
