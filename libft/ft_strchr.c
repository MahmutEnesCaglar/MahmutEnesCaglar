#include "header.h"

char	*ft_strchr( char *s, int i)
{
    while(*s)
    {
        if(*s == i)
            return s;
        s++;
    }
    if (i == 0)
		  return (s);
    return (0);
}
