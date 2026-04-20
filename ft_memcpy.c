/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memcpy.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/11 13:15:39 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 16:27:59 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;
	size_t				i;

	pdest = dest;
	psrc = src;
	if (psrc == pdest)
		return (dest);
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (dest);
}
