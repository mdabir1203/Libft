/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 03:44:34 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 06:11:30 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Here void pointer is required which cant be dereferenced
 *        So no & sign !! 
 *       Each character is passed by address to ’f’ to be modified if necessary.
 * 
 * @param s 
 * @param f 
 */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	if (s != 0 && f != 0)
	{
		count1 = ft_strlen(s);
		while (count2 < count1)
		{
			(*f)(count2++, s++);
		}
	}
}
