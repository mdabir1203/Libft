/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:15:07 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/30 15:54:17 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 
 * @brief deletes and free the given node
			and all its successor of that
			node. At the end 
 * 
 */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nextnode;

	if (!lst)
		return ;
	while (*lst)
	{
		nextnode = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = nextnode;
	}
}
