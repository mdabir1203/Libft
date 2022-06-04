/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:14:17 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 18:09:55 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_back.c
 * @param address of pointer to first link of list
 * 		  			node to be added
 * @brief We need to add node 'new' to our list
 * 			at the end
 * 			!lst means the list dont exist
 * 			lst == NULL is different than !lst
 * 			at lstlast fnc we send the address of first element
 */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*end;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}	
	end = ft_lstlast(*lst);
	end->next = new;
}
