/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_striteri.c                                     :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/17 16:24:24 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/19 13:56:58 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		f(i, &s[i]);
	return ;
}
