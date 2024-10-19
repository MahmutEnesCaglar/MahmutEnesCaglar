#include "header.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	if (!size)
		return ((size_t)ft_strlen(src));
	i = 0;
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return ((size_t)ft_strlen(src));
}
