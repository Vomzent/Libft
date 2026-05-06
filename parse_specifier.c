/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   parse_specifier.c                                 :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/05/03 14:36:15 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/06 20:58:30 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_helpers.h"

void	printf_assign_flags(char **f_str, t_format *format)
{
	format->w_style = 0;
	format->sign = 0;
	format->alt = 0;
	while (1)
	{
		*f_str += 1;
		if (**f_str == '-')
			format->w_style = 2;
		else if (**f_str == '+')
			format->sign = 1;
		else if (**f_str == ' ')
		{
			if (!format->sign)
				format->sign = 2;
		}
		else if (**f_str == '#')
			format->alt = 1;
		else if (**f_str == '0' && !format->w_style)
			format->w_style = 1;
		else
			return ;
	}
}

void	printf_assign_width(char **f_str,
			t_format *format, va_list *args)
{
	format->width = -1;
	if (**f_str == '*')
	{
		format->width = va_arg(*args, int);
		*f_str += 1;
	}
	else if (ft_isdigit(**f_str))
	{
		format->width = ft_atoi(*f_str);
		while (ft_isdigit(**f_str))
			*f_str += 1;
	}
}

void	printf_assign_precision(char **f_str,
			t_format *format, va_list *args)
{
	format->precision = -1;
	if (**f_str == '.')
	{
		*f_str += 1;
		if (**f_str == '*')
		{
			format->precision = va_arg(*args, int);
			*f_str += 1;
		}
		else if (ft_isdigit(**f_str))
		{
			format->precision = ft_atoi(*f_str);
			while (ft_isdigit(**f_str))
				*f_str += 1;
		}
		else
			format->precision = 0;
	}
}

int	printf_handle_specifier(int fd, char **s,
			t_format *form, va_list *args)
{
	*s += 1;
	if (!*(*s - 1))
		return (-1);
	if (*(*s - 1) == 'c')
		return (printf_handle_char(fd, form, va_arg(*args, int)));
	if (*(*s - 1) == 's')
		return (printf_handle_str(fd, form, va_arg(*args, char *)));
	if (*(*s - 1) == 'x')
		return (form->sign = 0,
			printf_handle_nbr(fd, form, va_arg(*args, unsigned int), HEX_LOW));
	if (*(*s - 1) == 'X')
		return (form-> sign = 0,
			printf_handle_nbr(fd, form, va_arg(*args, unsigned int), HEX_UP));
	if (*(*s - 1) == 'd' || *(*s - 1) == 'i')
		return (printf_handle_nbr(fd, form, va_arg(*args, int), DECIMAL));
	if (*(*s - 1) == '%')
		return (printf_handle_char(fd, (t_format *)0, '%'));
	if (*(*s - 1) == 'u')
		return (form->sign = 0,
			printf_handle_nbr(fd, form, va_arg(*args, unsigned int), DECIMAL));
	if (*(*s - 1) == 'p')
		return (printf_handle_ptr(fd, form, va_arg(*args, void *)));
	while (*(*s - 1) != '%')
		*s -= 1;
	return (printf_handle_char(fd, (t_format *)0, *(*s - 1)));
}

int	printf_print_specifier(int fd, char **s,
			t_format *format, va_list *args)
{
	printf_assign_flags(s, format);
	printf_assign_width(s, format, args);
	printf_assign_precision(s, format, args);
	return (printf_handle_specifier(fd, s, format, args));
}
