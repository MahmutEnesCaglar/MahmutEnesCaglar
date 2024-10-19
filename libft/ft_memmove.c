#include "header.h"

void	*ft_memmove(void *dest,  void *src, size_t n)
{
	char	*s;
	char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	s = src;
	d = dest;
	while (n--)
		d[n] = s[n];
	return (dest);
}