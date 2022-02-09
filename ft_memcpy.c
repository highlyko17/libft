#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    size_t i;
    unsigned char *src1;
    unsigned char *src2;

    if (!dest && !src)
        return (NULL);
    i = 0;
    src1 = (unsigned char *)dest;
    src2 = (unsigned char *)src;
    while (i < num)
    {
        src1[i] = src2[i];
        i++;
    }
    return (dest);
}