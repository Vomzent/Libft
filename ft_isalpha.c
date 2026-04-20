/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isalpha.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/09 17:27:12 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/10 15:23:25 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
