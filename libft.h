#ifndef __LIBFT_H__
# define __LIBFT_H__

#include <stdlib.h>
#include <unistd.h>

size_t ft_strlen(const char *str);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_atoi(const char *str);
int ft_strncmp(const char *dest, const char *src, size_t num);
char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int a);
char    *ft_strnstr(const char *str, const char *find, size_t len);
void    *ft_memset(void *ptr, int a, size_t num);
void    *ft_bzero(void *ptr, size_t num);
void    *ft_memcpy(void *dest, const void *src, size_t num);
void    *ft_memmove(void *dest, const void *src, size_t num);
void    *ft_memchr(void *ptr, int value, size_t num);

#endif