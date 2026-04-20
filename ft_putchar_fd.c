/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putchar_fd.c                                   :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/17 16:33:16 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:14:01 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
