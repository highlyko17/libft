#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char *)str);
}
