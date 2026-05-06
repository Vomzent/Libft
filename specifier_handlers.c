/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   specifier_handlers.c                              :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/04/24 19:53:59 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/06 20:56:06 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_helpers.h"

int	printf_handle_char(int fd, t_format *format, int c)
{
	int	ret;
	int	fill;

	fill = 0;
	if (format && format->w_style != 2)
		while (fill < format->width - 1 && write(fd, " ", 1) != -1)
			fill++;
	ret = write(fd, &c, 1);
	if (format && format->w_style == 2)
		while (fill < format->width - 1 && write(fd, " ", 1) != -1)
			fill++;
	if (ret == -1 || (format && fill < format->width - 1))
		return (-1);
	return (ret + fill);
}

int	printf_handle_str(int fd, t_format *format, char *s)
{
	int	ret;
	int	fill;
	int	size;

	fill = 0;
	if (s && format->precision != -1
		&& ft_strlen(s) > (size_t)format->precision)
		size = format->precision;
	else if (!s && format->precision != -1 && 6 > format->precision)
		size = 0;
	if (!s)
		s = "(null)";
	if (format->precision == -1
		|| ft_strlen(s) <= (size_t)format->precision)
		size = ft_strlen(s);
	while (format->w_style != 2 && fill < format->width - size
		&& write(fd, " ", 1) != -1)
		fill++;
	ret = write(fd, s, size);
	while (format->w_style == 2 && fill < format->width - size
		&& write(fd, " ", 1) != -1)
		fill++;
	if (ret == -1 || fill < format->width - size)
		return (-1);
	return (ret + fill);
}

int	printf_handle_nbr(int fd, t_format *format, ssize_t nbr, char *base)
{
	int	ret;
	int	fill;
	int	size;

	fill = 0;
	size = printf_number_length(nbr, base, format);
	while (format->w_style != 2 && fill < format->width - size
		&& write(fd, " ", 1) != -1)
		fill++;
	ret = printf_print_number(fd, nbr, base, format);
	while (format->w_style == 2 && fill < format->width - size
		&& write(fd, " ", 1) != -1)
		fill++;
	if (ret == -1 || fill < format->width - size)
		return (-1);
	return (ret + fill);
}

int	printf_handle_ptr(int fd, t_format *format, void *ptr)
{
	int	ret;
	int	fill;
	int	size;

	if (!ptr)
		return (format->precision = 5, printf_handle_str(fd, format, "(nil)"));
	fill = 0;
	size = printf_pointer_length((uintptr_t)ptr, format);
	while (format->w_style != 2 && fill < format->width - size
		&& write(fd, " ", 1) != -1)
		fill++;
	ret = printf_print_pointer(fd, (uintptr_t)ptr, format);
	while (format->w_style == 2 && fill < format->width - size
		&& write(fd, " ", 1) != -1)
		fill++;
	if (ret == -1 || fill < format->width - size)
		return (-1);
	return (ret + fill);
}
