#include "header.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr;
    ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if((!s1 && !s2) || !ptr)
        return (0);
    ft_strlcpy(ptr, (char *)s1, ft_strlen(s1)+1);
    ft_strlcat(ptr, (char *)s2, ft_strlen(s1) + ft_strlen(s2) + 1);
    return(ptr);
}
