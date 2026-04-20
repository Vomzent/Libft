/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstiter.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 18:29:14 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 18:50:44 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	head = lst;
	while (head)
	{
		f(head->content);
		head = head->next;
	}
}
