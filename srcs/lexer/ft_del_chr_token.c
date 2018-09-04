#include "ft_lexer.h"

void	ft_del_chr_token(t_chr_token **tkn)
{
	if (tkn && *tkn)
	{
		free(*tkn);
		*tkn = 0;
	}
}