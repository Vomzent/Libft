/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strlen.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/10 16:50:23 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/10 17:02:32 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
