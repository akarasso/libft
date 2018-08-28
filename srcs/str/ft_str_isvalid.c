#include "ft_str.h"

int		ft_str_isvalid(char *str, char *token_chr)
{
	while (*str)
	{
		if (!ft_strchr(token_chr, *str))
			return (0);
		str++;
	}
	return (1);
}
