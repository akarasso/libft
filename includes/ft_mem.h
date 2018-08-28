#ifndef FT_MEM_H
# define FT_MEM_H

# include <stdlib.h>
# include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *d1, int c, size_t n);
int		ft_memcmp(const void *d1, const void *d2, size_t n);
void	*ft_memcpy(void *dest, const void *s, size_t n);
void	ft_memdel(void **ap);
void	*ft_memmove(void *dest, const void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memalloc(size_t n);
void	ft_bzero(void *s, size_t n);;

#endif
