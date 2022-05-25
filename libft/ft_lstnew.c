/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:54:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/25 07:22:09 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * linked list adv:
 *  Dynamic Size
 *  Easy insert/delete of data
 *  Disadv:
 *  random access not allowed .. access sequentially
 *  No Binary search 
 *  Extra memory space for a pointer with each element of list
 *  Not contiguous location like array
 *  First node --> Head , if empty head points to NUKK
 * ---- 
 *  Have two parts -->> data and pointer to the next node 
 * @param content : to create the node
 * @return New Node 
 * Content is initialized by value param 'content' 'next' = null
 */


t_list *ft_lstnew(void *content)
{
    t_list output;
}