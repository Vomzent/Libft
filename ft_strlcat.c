/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strlcat.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/12 19:55:38 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/13 10:37:29 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	srclen = 0;
	destlen = 0;
	i = 0;
	while (src[srclen])
		srclen++;
	if (!size)
		return (srclen);
	while (dst[destlen] && destlen < size)
		destlen++;
	if (dst[destlen])
		return (srclen + destlen);
	while (src[i] && i + destlen + 1 < size)
	{
		dst[i + destlen] = src[i];
		i++;
	}
	dst[i + destlen] = '\0';
	return (srclen + destlen);
}
