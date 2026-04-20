/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putstr_fd.c                                    :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/17 17:32:53 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:14:43 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
