/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstnew.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 13:28:45 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:16:55 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = content;
	new->next = 0;
	return (new);
}
