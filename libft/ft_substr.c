#include "header.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i=0;
    char *ptr;
    ptr = (char *)malloc((len+1)*sizeof(char));
    if (ptr == NULL || s == NULL || start >= ft_strlen((char *)s))
        return (NULL);
    while(i < len && s[i] != '\0')    
    {
        ptr[i] = s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}