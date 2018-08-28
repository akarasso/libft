#include "ft_mem.h"
#include "ft_str.h"

char	*ft_strndup(char *s, int len)
{
	char *new;

	if (!(new = (char *)malloc(sizeof(*new) * (len + 1))))
		return (0);
	ft_strncat(new, s, len);
	new[len] = 0;
	return (new);
}
