#include "header.h"

int		ft_memcmp( void *s1,  void *s2, size_t n)
{
    char *str1;
    char *str2;
    str1 = s1;
    str2 = s2;
    while(n--)
    {
        if(*str1 != *str2)
            return(*str1 - *str2);
        str1++;
        str2++;
    }
    return(0);
}