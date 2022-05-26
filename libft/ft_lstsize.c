/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:13:08 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/26 09:18:54 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Counts the no of nodes in a list
 * @param beginning of list 
 * @return length of list 
 */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	size_t	count;

	temp = lst;
	if (!lst)
		return (0);
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
