#ifndef FT_STR_H
# define FT_STR_H

# define LEFT 0x01
# define MID 0x02
# define RIGHT 0x04

# include <stddef.h>

char	**ft_strsplit(char const *s, char c);
char	*ft_3strjoinfree(char *s1, char *s2, char *s3, char flag);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *str, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoinfree(char *s1, char *s2, char flag);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strncat(char *dest, const char *src, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t size);
char	*ft_strndup(char *s, int len);
char	*ft_strnew(size_t n);
char	*ft_strnstr(const char *str, const char *find, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strrev(char *s);
char	*ft_strstr(const char *str, const char *find);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *src);
int		ft_str_isvalid(char *str, char *token_chr);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strdigit(char *s);
int		ft_stralpha(char *s);
void	ft_strclr(char *s);
void	ft_strdel(char **str);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strlastchr(char *s);
char	*ft_strnjoin(char *src, int lsrc, char *right, char flag);
void	ft_strrmvchr(char *s);
char	*ft_strnchr(char *str, char c, int n);
int		ft_str_onlychr(char *str, char *valid);

#endif
