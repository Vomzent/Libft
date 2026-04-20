/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstclear.c                                     :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 18:06:16 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 18:25:48 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*head;
	t_list	*next;

	head = *lst;
	while (head)
	{
		next = head->next;
		ft_lstdelone(head, del);
		head = next;
	}
	*lst = head;
}
