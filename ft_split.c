/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_split.c                                        :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/16 12:22:50 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:12:58 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	split_count(const char *s, char sep)
{
	size_t	count;
	int		is_str;

	count = 0;
	is_str = 0;
	while (*s)
	{
		if (*s == sep)
			is_str = 0;
		if (*s != sep && !is_str)
		{
			count++;
			is_str = 1;
		}
		s++;
	}
	return (count);
}

static char	*split_get_start(const char *s, char sep, size_t n)
{
	int		is_str;
	char	*str;

	is_str = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str == sep)
			is_str = 0;
		if (*str != sep && !is_str)
		{
			if (!n)
				return (str);
			is_str = 1;
			n--;
		}
		str++;
	}
	return (0);
}

static char	*split_make(const char *s, char sep)
{
	char	*str;
	char	*split;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (*str != sep && *str)
		str++;
	split = ft_calloc(str - s + 1, sizeof(char));
	if (!split)
		return (0);
	str = (char *)s;
	while (str[i] != sep && str[i])
	{
		split[i] = str[i];
		i++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	count;
	size_t	i;

	count = split_count(s, c);
	ptr = ft_calloc(count + 1, sizeof(void *));
	if (!ptr)
		return (0);
	i = 0;
	while (i < count)
	{
		ptr[i] = split_make(split_get_start(s, c, i), c);
		if (!ptr[i])
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr[i]);
			free(ptr);
			return (0);
		}
		i++;
	}
	return (ptr);
}
