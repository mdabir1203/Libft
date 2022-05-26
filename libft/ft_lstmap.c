/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 04:16:20 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/26 12:25:26 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief 
 * @version 0.1
 * @date 2022-05-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_list;
	
	if(!lst || !f)
		return (NULL);
	while(lst != NULL)	
	{
		temp = ft_lstnew(lst->content);
		if (!temp)
			{
				ft_lstclear(lst->content,del);
			}

	}
	ft	
	ft_lstiter(->content,(*f));
}
