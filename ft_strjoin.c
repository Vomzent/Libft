/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strjoin.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/15 18:36:09 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/15 18:48:02 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s1);
	size += ft_strlen(s2);
	str = ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, size + 1);
	ft_strlcat(str, s2, size + 1);
	return (str);
}
