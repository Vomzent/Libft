/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strdup.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/15 15:25:16 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/15 16:41:30 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (0);
	ft_memmove(str, s, size + 1);
	return (str);
}
