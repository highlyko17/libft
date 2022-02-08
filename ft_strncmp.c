#include "libft.h"

int ft_strncmp(const char *dest, const char *src, size_t num)
{
    size_t i;
    
    i = 0;
    while (dest[i] && src[i] && i < num)
    {
        if (dest[i] != src[i])
            break;
        i++;
    }
    if (i != num)
        return ((unsigned char)dest[i] - (unsigned char)src[i]);
    return (0);
}