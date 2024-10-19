#include "header.h"

char	*ft_strrchr( char *s, int i)
{
    unsigned int len = ft_strlen(s);
    s += len - 1;
    
    while(len--)
    {
        if(*s == i)
            return s;
        s--;
    }
    if (i == 0)
		return (s+len);
    return (0);
}