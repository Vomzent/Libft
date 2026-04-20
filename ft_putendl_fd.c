/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putendl_fd.c                                   :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/18 12:22:13 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:15:02 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
	return ;
}
