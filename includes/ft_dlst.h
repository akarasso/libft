#ifndef FT_DLST_H
# define FT_DLST_H

# define BEFORE 0x01
# define AFTER 0x02

# include <stddef.h>

typedef struct	s_dlst
{
	void			*first;
	void			*last;
	unsigned int	len;
}				t_dlst;

typedef struct	s_dlst_elem
{
	struct s_dlst_elem	*next;
	struct s_dlst_elem	*prev;
	void				*data;
}				t_dlst_elem;

t_dlst_elem		*ft_dlst_push(t_dlst *container, void *data);
t_dlst_elem		*ft_dlst_pushback(t_dlst *container, void *data);
t_dlst_elem		*ft_dlst_new_elem(void *data);
t_dlst_elem		*ft_dlst_getlast(t_dlst_elem *lst);
t_dlst			*ft_dlst_new(void *content);
unsigned int	ft_dlst_len(t_dlst *container);
void			ft_dlst_del(t_dlst **container, void (*del_elem_func)(void *));
void			ft_dlst_delif(t_dlst *container, int (*delif_func)(void *), void (*del)(void *));
void			ft_dlst_iter(t_dlst *container, void (*exec_func)(void *elem));
void			ft_dlst_cut(t_dlst_elem *lst, char flag);
void			ft_dlst_delelem(t_dlst_elem **elem, void(*f)(void **data));

#endif
