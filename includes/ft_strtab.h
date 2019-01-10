#ifndef FT_STRTAB_H
# define FT_STRTAB_H

# include "ft_str.h"

int		ft_strtab_add(char ***arr, char *new);
void	ft_strtab_cpy(char **src, char **dest);
void	ft_strtab_del(char ***arr);
int		ft_strtab_len(char **arr);
char	**ft_strtab_new(int len);
char	**ft_strtab_realloc(char ***src, int len);
void	ft_strtab_free(char ***arr);
void	ft_strtab_del_one(char **arr, int i);
void	ft_strtab_print(char **arr);
int		ft_strtab_find_index(char **arr, char *value);
int		ft_strtab_strncmp_i(char **arr, char *value);
char	**ft_strtab_dup(char **src);
void	ft_strtab_cat(char **dest, char **src);
char	**ft_strtab_3join(char **tab1, char **tab2, char **tab3, char flag);
void 	ft_strtab_iter(char **arr, void (*func)(char *, void *), void *data);
char	*ft_strtab_join(char **arr, char *key);

#endif
