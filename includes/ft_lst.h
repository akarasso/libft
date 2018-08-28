#ifndef FT_LST_H
# define FT_LST_H

# include <stddef.h>

typedef struct	s_list
{
	void			*first;
	void			*last;
	unsigned int	len;
}				t_list;

typedef struct	s_list_elem
{
	struct s_list_elem	*next;
	void				*data;
}				t_list_elem;

void			ft_lst_del(t_list **container, void (*del_elem_func)(void *));
void			ft_lst_delif(t_list *container, int (*delif_func)(void *), void (*del)(void *));
int				ft_lst_push(t_list *container, void *data);
int				ft_lst_pushback(t_list *container, void *data);
void			ft_lst_iter(t_list *container, void (*exec_func)(void *elem));
unsigned int	ft_lst_len(t_list *container);
t_list			*ft_lst_new(void *content);
t_list_elem		*ft_lst_new_elem(void *data);

#endif