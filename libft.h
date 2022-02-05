#ifndef __LIBFT_H__
# define __LIBFT_H__

#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *str);
int ft_tolower(int c);
int ft_toupper(int c);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int a);
void    *memset(void *ptr, int a, size_t num);

#endif
