#include "libft.h"

void    *ft_memset(void *ptr, int a, size_t num)
{
    size_t  i;
    unsigned char *temp;

    if (!ptr)
        return (NULL);
    i = 0;
    temp = (unsigned char *)ptr;
    while (i < num)
    {
        temp[i] = (unsigned char)a;
        i++;
    }
    return (ptr);
}