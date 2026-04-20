/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strndup.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/15 16:56:02 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/18 20:28:52 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	if (size > n)
		size = n;
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (0);
	ft_memmove(str, s, size);
	return (str);
}
