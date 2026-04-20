/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_itoa.c                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/14 20:04:52 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:00:55 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*itoa_alloc_mem(int n, int *size, int *sign)
{
	int		i;
	char	*str;

	*size = 1;
	*sign = 0;
	i = n;
	while (i / 10 != 0)
	{
		*size += 1;
		i /= 10;
	}
	if (n < 0)
		*sign += 1;
	str = malloc((*size + *sign + 1) * sizeof(char));
	if (!str)
		return (0);
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*str;
	int		sign;
	int		d;

	str = itoa_alloc_mem(n, &size, &sign);
	if (!str)
		return (0);
	str[size-- + sign] = '\0';
	if (sign)
		str[0] = '-';
	i = n;
	while (size >= 0)
	{
		d = i % 10;
		if (sign)
			d *= -1;
		str[size + sign] = d + '0';
		i /= 10;
		size--;
	}
	return (str);
}
