/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_psplit.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/16 12:22:50 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/14 18:05:02 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	in_sep(char c, char *sep)
{
	sep -= 1;
	while (*(++sep))
		if (*sep == c)
			return (1);
	return (0);
}

static size_t	split_count(const char *s, char *sep)
{
	size_t	count;
	int		is_str;

	count = 0;
	is_str = 0;
	while (*s)
	{
		if (in_sep(*s, sep))
			is_str = 0;
		if (!in_sep(*s, sep) && !is_str)
		{
			count++;
			is_str = 1;
		}
		s++;
	}
	return (count);
}

static char	*split_get_start(const char *s, char *sep, size_t n)
{
	int		is_str;
	char	*str;

	is_str = 0;
	str = (char *)s;
	while (*str)
	{
		if (in_sep(*str, sep))
			is_str = 0;
		if (!in_sep(*str, sep) && !is_str)
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

static char	*split_make(const char *s, char *sep)
{
	char	*str;
	char	*split;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (!in_sep(*str, sep) && *str)
		str++;
	split = ft_calloc(str - s + 1, sizeof(char));
	if (!split)
		return (0);
	str = (char *)s;
	while (!in_sep(str[i], sep) && str[i])
	{
		split[i] = str[i];
		i++;
	}
	return (split);
}

char	**ft_psplit(char const *s, char *c)
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
