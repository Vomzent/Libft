/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strtrim.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/16 09:55:42 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/19 12:37:16 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	strtrim_in_set(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*src;
	char	*str;
	size_t	strlen;

	src = (char *)s1;
	strlen = ft_strlen(src);
	while (strtrim_in_set(*src, set) && strlen)
	{
		src++;
		strlen--;
	}
	while (strtrim_in_set(src[strlen - 1], set) && strlen)
		strlen--;
	str = ft_calloc(strlen + 1, sizeof(char));
	if (!str)
		return (0);
	ft_strlcpy(str, src, strlen + 1);
	return (str);
}
