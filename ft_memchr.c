/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memchr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/13 21:03:53 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/13 21:27:58 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)ptr;
	while (i < count)
	{
		if (p[i] == (unsigned char)ch)
			return (p + i);
		i++;
	}
	return (0);
}
