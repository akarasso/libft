#include "ft_lexer.h"

t_chr_token	*ft_new_chr_token(int type, char **str)
{
	t_chr_token	*new;

	if (!str || !*str || !(new = (t_chr_token*)ft_memalloc(sizeof(*new))))
		return (0);
	new->type = type;
	new->value = **str;
	(*str)++;
	return (new);
}
