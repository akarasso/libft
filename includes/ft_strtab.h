#ifndef FT_STRTAB_H
# define FT_STRTAB_H

int		ft_strtab_add(char ***tab, char *new);
void	ft_strtab_cpy(char **src, char **dest);
void	ft_strtab_del(char ***tab);
int		ft_strtab_len(char **tab);
char	**ft_strtab_new(int len);
char	**ft_strtab_realloc(char ***src, int len);

#endif
