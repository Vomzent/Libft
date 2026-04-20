/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_toupper.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/13 09:34:53 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/13 09:54:24 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c + 'A' - 'a');
	else
		return (c);
}
