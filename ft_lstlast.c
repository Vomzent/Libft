/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstlast.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 16:39:44 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 17:11:19 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*head;

	head = lst;
	while (head)
	{
		if (!head->next)
			return (head);
		head = head->next;
	}
	return (0);
}
