#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t num)
{
    int  i;
    
    if (!dest && !src)
        return (NULL);
    if (dest < src)
    {
        i = 0;
        while (i < (int)num)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else
    {
        i = (int)num - 1;
        while (i >= 0)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    return (dest);
}