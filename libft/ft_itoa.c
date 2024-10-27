/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macaglar <macaglar@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:20:45 by macaglar          #+#    #+#             */
/*   Updated: 2024/10/27 17:54:54 by macaglar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_size(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len ++;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*ptr;
	int				size;
	unsigned int	number;

	number = n;
	size = ft_find_size(n);
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (!(ptr))
		return (NULL);
	ptr[size--] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		number = n * -1;
		ptr[0] = '-';
	}
	while (number > 0)
	{
		ptr[size--] = number % 10 + 48;
		number = number / 10;
	}
	return (ptr);
}
