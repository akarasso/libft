#include "ft_lexer.h"

void	ft_del_int_token(t_int_token **tkn)
{
	if (tkn && *tkn)
	{
		free(*tkn);
		*tkn = 0;
	}
}