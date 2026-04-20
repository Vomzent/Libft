/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_bzero.c                                        :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/10 17:52:51 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/10 17:57:13 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}
