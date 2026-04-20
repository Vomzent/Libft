/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_putnbr_fd.c                                    :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/18 15:58:11 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:15:22 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n / 10 != 0)
		ft_putnbr_fd(n / 10, fd);
	digit = n % 10;
	if (digit < 0 && n / 10 == 0)
		write(fd, "-", 1);
	if (digit < 0)
		digit *= -1;
	digit += '0';
	write(fd, &digit, 1);
	return ;
}
