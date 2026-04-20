/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_atoi.c                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/15 12:55:04 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/18 20:45:35 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		nbr *= 10;
		nbr += (*nptr - '0') * sign;
		nptr++;
	}
	return (nbr);
}
