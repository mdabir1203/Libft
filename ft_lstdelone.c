/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:14:39 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/30 15:29:42 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Take node and free the memory of node's content usng 'del'
 * 			function. memory of 'next' must not be freed. We are using
 * 			a fnc pointer which is the content of the element received
 * @param the node to free, address of fnc to delete content
 * 
 */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}
