/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memmove.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/11 18:21:25 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 16:03:03 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = dest;
	psrc = src;
	i = 0;
	if (pdest == psrc)
		return (dest);
	while (i < n)
	{
		if (src > dest)
			pdest[i] = psrc[i];
		else
			pdest[n - 1 - i] = psrc[n - 1 - i];
		i++;
	}
	return (dest);
}
