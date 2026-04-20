/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_substr.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/15 16:50:38 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/19 13:46:20 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start > ft_strlen(s))
	{
		str = ft_calloc(1, sizeof(char));
		return (str);
	}
	str = ft_strndup(s + start, len);
	return (str);
}
