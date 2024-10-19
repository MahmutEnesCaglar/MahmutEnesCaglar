#include "header.h"

void	*ft_memcpy(void *dest,  void *src, size_t n)
{
    char* pt1;
    char* pt2;

    pt1 = dest;
    pt2 = src;
	if (!dest && !src)
		return (dest);
    while(n--)
        *pt1++ = *pt2++;
    return (dest);
}