/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   number_helpers.c                                  :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/04/28 12:38:34 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/06 20:54:58 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_helpers.h"

int	printf_number_length(ssize_t number, char *base, t_format *format)
{
	int	len;
	int	digits;
	int	baselen;

	len = 0;
	digits = 1;
	if (format && (format->sign || number < 0))
		len++;
	if (format && number == 0 && format->precision == 0)
		return (len);
	if (format && format->alt && number && base[10])
		len += 2;
	if (format->w_style == 1 && format->precision == -1 && format->width - len)
		format->precision = format->width - len;
	baselen = ft_strlen(base);
	while (number / baselen != 0)
	{
		number /= baselen;
		digits++;
	}
	if (format && format->precision > digits)
		digits = format->precision;
	return (len + digits);
}

int	printf_write_digits(int fd, ssize_t nbr, char *base, int len)
{
	int		ret;
	int		baselen;
	int		digit;
	char	c;

	ret = 0;
	baselen = ft_strlen(base);
	if (nbr / baselen != 0 || len > 1)
		ret += printf_write_digits(fd, nbr / baselen, base, len - 1);
	digit = nbr % baselen;
	if (digit < 0)
		digit *= -1;
	c = base[digit];
	if (ret != -1 && write(fd, &c, 1) != -1)
		return (++ret);
	return (-1);
}

int	printf_print_number(int fd, ssize_t number, char *base, t_format *format)
{
	int	ret;
	int	digitlen;

	ret = 0;
	digitlen = 0;
	if (number < 0 && write(fd, "-", 1) != -1)
		ret++;
	else if (format->sign == 1 && write(fd, "+", 1) != -1)
		ret++;
	else if (format->sign == 2 && write(fd, " ", 1) != -1)
		ret++;
	if (format->alt && base[10] == 'a' && number && write(fd, "0x", 2) != -1)
		ret += 2;
	if (format->alt && base[10] == 'A' && number && write(fd, "0X", 2) != -1)
		ret += 2;
	if (number != 0 || format->precision != 0)
		digitlen = printf_write_digits(fd, number, base, format->precision);
	if (digitlen != -1)
		return (ret + digitlen);
	return (-1);
}
