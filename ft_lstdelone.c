/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_lstdelone.c                                    :+:    :+:             */
/*                                                    +:+                     */
/*   By: vcoevert <vcoevert@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2026/03/21 17:38:57 by vcoevert     #+#    #+#                  */
/*   Updated: 2026/03/22 16:17:40 by vcoevert     ########   odam.nl          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
