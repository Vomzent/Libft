/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   pointer_helpers.c                                 :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/04/28 12:38:34 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/06 20:55:48 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_helpers.h"

int	printf_pointer_length(uintptr_t pointer, t_format *format)
{
	int		len;
	int		digits;
	char	*base;

	len = 0;
	digits = 1;
	base = HEX_LOW;
	if (format->sign)
		len++;
	len += 2;
	if (format->w_style == 1 && format->precision == -1)
		format->precision = format->width - len;
	while (pointer / 16 != 0)
	{
		pointer /= 16;
		digits++;
	}
	if (format && format->precision > digits)
		digits = format->precision;
	return (len + digits);
}

int	printf_write_ptr_digits(int fd, uintptr_t ptr, int len)
{
	int		ret;
	int		digit;
	char	*base;
	char	c;

	ret = 0;
	base = HEX_LOW;
	if (ptr / 16 != 0 || len > 1)
		ret += printf_write_ptr_digits(fd, ptr / 16, len - 1);
	digit = ptr % 16;
	c = base[digit];
	if (ret != -1 && write(fd, &c, 1) != -1)
		return (++ret);
	return (-1);
}

int	printf_print_pointer(int fd, uintptr_t pointer, t_format *format)
{
	int		ret;
	int		digitlen;
	char	*base;

	ret = 0;
	digitlen = 0;
	base = HEX_LOW;
	if (format->sign == 1 && write(fd, "+", 1) != -1)
		ret++;
	else if (format->sign == 2 && write(fd, " ", 1) != -1)
		ret++;
	ret += write(fd, "0x", 2);
	digitlen = printf_write_ptr_digits(fd, pointer, format->precision);
	if (digitlen != -1 && ret >= 2)
		return (ret + digitlen);
	return (-1);
}
