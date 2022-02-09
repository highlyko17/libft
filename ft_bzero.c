#include "libft.h"

void    *ft_bzero(void *ptr, size_t num)
{
    size_t  i;
    unsigned char   *temp;

    if (!ptr)
        return (NULL);
    i = 0;
    temp = (unsigned char *)ptr;
    while (i < num)
    {
        temp[i] = 0;
        i++;
    }
    return (ptr);
}