#include "header.h"

void	*ft_calloc(size_t count, size_t size)
{
    char *ptr;
    int len =count*size;
    ptr = malloc(len);
    if(!ptr)
        return (NULL);
    while(len--)
        ptr[len] = 0;
    return (ptr);
}