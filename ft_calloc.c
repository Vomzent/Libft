/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_calloc.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/15 14:20:21 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:07:56 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	alloc;
	char	*ptr;

	alloc = 0;
	while (nmemb)
	{
		if (alloc > __SIZE_MAX__ - size)
			return (0);
		alloc += size;
		nmemb--;
	}
	ptr = malloc(alloc);
	if (!ptr)
		return (0);
	while (alloc)
		ptr[alloc-- - 1] = '\0';
	return ((void *)ptr);
}
