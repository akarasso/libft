#include "libft.h"

char	**ft_strtab_3join(char **tab1, char **tab2, char **tab3, char flag)
{
	char	**new;
	int		len;

	len = 0;
	len += (tab1) ? ft_strtab_len(tab1) : 0;
	len += (tab2) ? ft_strtab_len(tab2) : 0;
	len += (tab3) ? ft_strtab_len(tab3) : 0;
	if (!(new = ft_strtab_new(len)))
	{
		return (0);
	}
	if (tab1)
		ft_strtab_cat(new, tab1);
	if (tab2)
		ft_strtab_cat(new, tab2);
	if (tab3)
		ft_strtab_cat(new, tab3);
	if (flag & LEFT)
		free(tab1);
	if (flag & RIGHT)
		free(tab3);
	if (flag & MID)
		free(tab2);
	return (new);
}