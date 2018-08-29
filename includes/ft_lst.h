#ifndef FT_LST_H
# define FT_LST_H

# include <stddef.h>

typedef struct	s_lst
{
	void			*first;
	void			*last;
	unsigned int	len;
}				t_lst;

typedef struct	s_lst_elem
{
	struct s_lst_elem	*next;
	void				*data;
}				t_lst_elem;

void			ft_lst_del(t_lst **container, void (*del_elem_func)(void *));
void			ft_lst_delif(t_lst *container, int (*delif_func)(void *), void (*del)(void *));
int				ft_lst_push(t_lst *container, void *data);
int				ft_lst_pushback(t_lst *container, void *data);
void			ft_lst_iter(t_lst *container, void (*exec_func)(void *elem));
unsigned int	ft_lst_len(t_lst *container);
t_lst			*ft_lst_new(void *content);
t_lst_elem		*ft_lst_new_elem(void *data);
t_lst_elem		*ft_lst_getlast(t_lst_elem *lst);

#endif