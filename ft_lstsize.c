/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstsize.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 14:52:14 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 15:29:39 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	n;

	n = 0;
	while (lst)
	{
		lst = lst->next;
		n++;
	}
	return (n);
}
