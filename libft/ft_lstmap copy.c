/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 18:14:40 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/30 18:30:42 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Iterates the list ’lst’ and applies the function
		’f’ on the content of each node. Creates a new
		list resulting of the successive applications of
		the function ’f’. The ’del’ function is used to
		delete the content of a node if needed.

		used ft_lstnew to create a new list
		then used clear to delete the node if needed
		After that we are also doing it add the results 
		back in the node
 */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*result_node;

	result_node = NULL;
	while (lst)
	{
		new_list = ft_lstnew (f(lst->content));
		if (!new_list)
		{
			ft_lstclear (&new_list, del);
			return (NULL);
		}
		ft_lstadd_back (&result_node, new_list);
		lst = lst->next;
	}
	return (result_node);
}
