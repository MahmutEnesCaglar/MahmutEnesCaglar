#include "header.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char* ptr;
    ptr = malloc((ft_strlen(s)+1)*sizeof(char));
    if (ptr == NULL)
        return (NULL);
    int i = 0;
    while(s[i])
    {
        ptr[i] = f(1,s[i]);
        i++;
    }
    return (ptr);
}