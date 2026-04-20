/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_isalnum.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/10 14:55:52 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/10 16:29:16 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
