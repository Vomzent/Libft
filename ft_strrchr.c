/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strrchr.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/13 16:15:57 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 20:41:53 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = 0;
	while (str[i])
	{
		if (str[i] == (char)ch)
			ptr = (char *)str + i;
		i++;
	}
	if ((char)ch == '\0')
		ptr = (char *)str + i;
	return (ptr);
}
