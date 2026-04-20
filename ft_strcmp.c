/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strcmp.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/17 10:32:36 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/17 11:20:18 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((unsigned char)s1[i] || (unsigned char)(s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
