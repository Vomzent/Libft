/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstmap.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 20:16:14 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:18:03 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*nlst;
	t_list	*new;
	void	*cnew;

	head = lst;
	nlst = 0;
	while (head)
	{
		cnew = f(head->content);
		new = ft_lstnew(cnew);
		if (!new)
		{
			free(cnew);
			ft_lstclear(&nlst, del);
			return (0);
		}
		ft_lstadd_back(&nlst, new);
		head = head->next;
	}
	return (nlst);
}
