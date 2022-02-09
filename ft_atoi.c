#include "libft.h"

static int  ft_isspace(const char *str)
{
    int i;

    i = 0;
    while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
        i++;
    return (i);
}

int ft_atoi(const char *str)
{
    int i;
    int neg;
    int num;

    i = ft_isspace(str);
    neg = 1;
    num = 0;
    if (str[i] == '-')
    {
        i++;
        neg = -1;
    }
    else if (str[i] == '+')
        i++;
    while (ft_isdigit(str[i]))
        num = (num * 10) + (str[i++] - '0');
    return (neg * num);
}