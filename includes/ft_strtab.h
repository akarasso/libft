#ifndef FT_STRTAB_H
# define FT_STRTAB_H

# include "ft_str.h"

int		ft_strtab_add(char ***tab, char *new);
void	ft_strtab_cpy(char **src, char **dest);
void	ft_strtab_del(char ***tab);
int		ft_strtab_len(char **tab);
char	**ft_strtab_new(int len);
char	**ft_strtab_realloc(char ***src, int len);
void	ft_strtab_free(char ***tab);
void	ft_strtab_del_one(char **tab, int i);
void	ft_strtab_print(char **tab);
int		ft_strtab_find_index(char **tab, char *value);
int		ft_strtab_strncmp_i(char **tab, char *value);
char	**ft_strtab_dup(char **src);
void	ft_strtab_cat(char **dest, char **src);
char	**ft_strtab_3join(char **tab1, char **tab2, char **tab3, char flag);
void 	ft_strtab_iter(char **tab, void (*func)(char *, void *), void *data);
char	*ft_strtab_join(char **tab, char *key);

#endif
