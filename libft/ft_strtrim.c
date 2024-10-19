#include "header.h"

char	*ft_strtrim(char  *s1, char  *set)
{
    char* ptr;
    unsigned int a=0;
    int x=0;
    unsigned int b=ft_strlen(s1) - 1;
    while(s1[a] && ft_strchr(set,s1[a]))
        a++;
    if(a==ft_strlen(s1))
        return(ft_strdup(""));
    while(s1[b] && ft_strchr(set,s1[b]))
        b--;
    ptr = (char *)malloc((b-a) * sizeof(char));
    if(ptr == NULL)
        return(NULL);
    while(a<=b)
    {
        ptr[x] = s1[a];
        a++;
        x++;
    }
    ptr[x] = '\0';
    return (ptr);
}