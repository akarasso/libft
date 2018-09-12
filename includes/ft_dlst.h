#ifndef FT_DLST_H
# define FT_DLST_H

# define BEFORE 0x01
# define AFTER 0x02

# include <stddef.h>

typedef struct	s_dlst_elem
{
	struct s_dlst_elem	*next;
	struct s_dlst_elem	*prev;
	void				*data;
}				t_dlst_elem;

typedef struct	s_dlst
{
	t_dlst_elem		*first;
	t_dlst_elem		*last;
	unsigned int	len;
}				t_dlst;

t_dlst_elem		*ft_dlst_push(t_dlst *container, void *data);
t_dlst_elem		*ft_dlst_pushback(t_dlst *container, void *data);
t_dlst_elem		*ft_dlst_new_elem(void *data);
t_dlst_elem		*ft_dlst_getlast(t_dlst_elem *lst);
t_dlst			*ft_dlst_new(void *content);
unsigned int	ft_dlst_len(t_dlst *container);
void			ft_dlst_del(t_dlst **container, void (*del_elem_func)(t_dlst_elem *));
void			ft_dlst_delif(t_dlst *container, int (*delif_func)(void *), void (*del)(void *));
void			ft_dlst_cut(t_dlst_elem *lst, char flag);
void			ft_dlst_delelem(t_dlst *container, t_dlst_elem **elem, void(*f)(void *data));
void			ft_dlst_clr(t_dlst *container, void (*f)(void *));
void			ft_dlst_iter(t_dlst *container, void (*exec_func)(t_dlst_elem *));
void			ft_dlst_iter_data(t_dlst *container, void (*exec_func)(void *));
void			ft_dlst_reduce(t_dlst *container, void (*exec_func)(t_dlst_elem *, void *), void *acc);
void			ft_dlst_reduce_data(t_dlst *container, void (*exec_func)(void *, void *), void *acc);
void			ft_dlstelem_reduce_data(t_dlst_elem *elem, void (*exec_func)(void *, void*), void *arg);
void			ft_dlstelem_del(t_dlst_elem **elem, void(*f)(void *data));
void			ft_dlstelem_iter_data(t_dlst_elem *elem, void (*exec_func)(void *elem));

#endif
