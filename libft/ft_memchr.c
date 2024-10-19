#include "header.h"

void	*ft_memchr( void *s, int c, size_t n)
{
    char* s1;
    
    s1 = s;
    while(*s1++ && n--)
        if(*s1 == c)
            return s1;
    if (c == 0)
		return ((void *)s1);
    return (0);
}
