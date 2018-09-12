#include "ft_lexer.h"
#include "ft_str.h"

#include <stdio.h>

t_str_token		*ft_new_str_token(int type, char **str, void (*go_to)(char**))
{
	t_str_token	*new;
	char		*start;

	if (!str || !*str || !(new = (t_str_token*)ft_memalloc(sizeof(*new))))
		return (0);
	start = *str;
	go_to(str);
	if (!(new->value = ft_strsub(start, 0, *str - start)))
	{
		free(new);
		return (0);
	}
	new->type = type;
	return (new);
}
