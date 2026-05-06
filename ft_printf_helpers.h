/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_printf_helpers.h                               :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/04/24 19:41:42 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/05/06 18:15:31 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_HELPERS_H
# define FT_PRINTF_HELPERS_H
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>
# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"
# define DECIMAL	"0123456789"

typedef struct s_format
{
	int	width;
	int	precision;
	int	w_style;
	int	sign;
	int	alt;
}				t_format;

int		printf_print_specifier(int fd, char **s, t_format *form, va_list *args);
void	printf_assign_flags(char **f_str, t_format *format);
void	printf_assign_width(char **f_str, t_format *format, va_list *args);
void	printf_assign_precision(char **f_str, t_format *format, va_list *args);
int		handle_specifier(int fd, char *s, t_format *form, va_list *args);
int		printf_handle_char(int fd, t_format *format, int c);
int		printf_handle_str(int fd, t_format *format, char *s);
int		printf_handle_nbr(int fd, t_format *format, ssize_t nbr, char *base);
int		printf_handle_ptr(int fd, t_format *format, void *ptr);
int		printf_number_length(ssize_t nbr, char *base, t_format *format);
int		printf_write_digits(int fd, ssize_t nbr, char *base, int len);
int		printf_print_number(int fd, ssize_t number, char *base, t_format *format);
int		printf_pointer_length(uintptr_t ptr, t_format *format);
int		printf_write_ptr_digits(int fd, uintptr_t ptr, int len);
int		printf_print_pointer(int fd, uintptr_t pointer, t_format *format);
#endif
