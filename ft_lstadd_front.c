/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstadd_front.c                                 :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 14:09:06 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/21 14:37:57 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return ;
}
