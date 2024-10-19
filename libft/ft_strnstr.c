#include "header.h"

char	*ft_strnstr( char *haystack,  char *needle, size_t len)
{
    size_t a=0;
    size_t b=0;

    if(needle[0] == '\0')
        return (haystack);
    while(haystack[a] != '\0' && a < len)
    {
        b=0;
        while(haystack[a+b] == needle[b] && (a+b) < len)
            b++;
        if(needle[b] == '\0')
            return(haystack+a);
        a++;
    }
    return (NULL);
}