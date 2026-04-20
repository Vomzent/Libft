/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstadd_back.c                                  :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 19:15:54 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 19:36:51 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	head = ft_lstlast(*lst);
	if (head)
		head->next = new;
	else
		*lst = new;
}
