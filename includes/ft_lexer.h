#ifndef FT_LEXER_H
# define FT_LEXER_H

# include "ft_mem.h"

typedef struct	s_int_token
{
	int		type;
	int		value;
}				t_int_token;

typedef struct	s_chr_token
{
	int		type;
	char	value;
}				t_chr_token;

typedef struct	s_str_token
{
	int		type;
	char	*value;
}				t_str_token;


t_str_token		*ft_new_str_token(int type, char **str, void (*go_to)(char**));
t_chr_token		*ft_new_chr_token(int type, char **str);
t_int_token		*ft_new_int_token(int type, char **str);
void			ft_del_chr_token(t_chr_token **tkn);
void			ft_del_int_token(t_int_token **tkn);
void			ft_del_str_token(t_str_token **tkn);

#endif
