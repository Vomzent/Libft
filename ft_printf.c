/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_printf.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/04/19 11:27:40 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/06 20:46:23 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_helpers.h"

int	ft_printf(const char *f_str, ...)
{
	va_list		args;
	int			count;
	int			check;
	char		*str;
	t_format	format;

	count = 0;
	check = 0;
	str = (char *)f_str;
	va_start(args, f_str);
	while (str && *str && check != -1)
	{
		if (*str == '%')
			check = printf_print_specifier(1, &str, &format, &args);
		else
			check = printf_handle_char(1, (t_format *)0, *(str++));
		count += check;
	}
	va_end(args);
	if (!f_str || check == -1)
		return (-1);
	return (count);
}

int	ft_dprintf(int fd, const char *f_str, ...)
{
	va_list		args;
	int			count;
	int			check;
	char		*str;
	t_format	format;

	count = 0;
	check = 0;
	str = (char *)f_str;
	va_start(args, f_str);
	while (str && *str && check != -1)
	{
		if (*str == '%')
			check = printf_print_specifier(fd, &str, &format, &args);
		else
			check = printf_handle_char(fd, (t_format *)0, *(str++));
		count += check;
	}
	va_end(args);
	if (!f_str || check == -1)
		return (-1);
	return (count);
}
