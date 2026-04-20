/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strchr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/13 15:39:46 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 20:39:22 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			return ((char *)str + i);
		i++;
	}
	if ((char)ch == '\0')
		return ((char *)str + i);
	return (0);
}
