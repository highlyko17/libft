#include "libft.h"

char    *ft_strnstr(const char *str, const char *find, size_t len)
{
    size_t  i;
    size_t  j;

    if (!str)
        return (NULL);
    if (find[0] == '\0')
        return ((char *)str);
    i = 0;
    while (str[i] && i < len)
    {
        j = 0;
        if (str[i] == find[j])
        {
            while (str[i] && find[j] && str[i] == find[j] && i < len)
                j++;
        }
        i++;
    }
    
}