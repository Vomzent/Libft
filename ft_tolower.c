/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_tolower.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/13 14:58:48 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/13 15:06:06 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 'a' - 'A');
	else
		return (c);
}
