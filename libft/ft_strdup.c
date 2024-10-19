#include "header.h"

char	*ft_strdup( char *s)
{
    int i=0;
    char *ptr;
    if(!s)
        return(NULL);
    ptr = malloc((ft_strlen(s)+1)*sizeof(char));
    if(!ptr)
        return(NULL);
    while(s[i])
    {
        ptr[i]=s[i];
        i++;
    }
    ptr[i]='\0';
    return(ptr);
}