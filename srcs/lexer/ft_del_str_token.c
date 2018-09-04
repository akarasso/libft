#include "ft_lexer.h"

void	ft_del_str_token(t_str_token **tkn)
{
	if (tkn && *tkn)
	{
		if ((*tkn)->value)
			free((*tkn)->value);
		free(*tkn);
		*tkn = 0;
	}
}