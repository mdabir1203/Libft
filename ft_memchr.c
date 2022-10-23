/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 20:24:44 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 19:03:24 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Goal: Find a character in a given character array !!
 * s: This is a pointer to the object to be searched for.
   c: This is a character to search for.
   n: Max number of the byte which is examined to search c.

   Return Value : Pointer to located char or NULL if char is not
   found.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	index;

	index = 0;
	str = (unsigned char *) s;
	while (index < n)
	{
		if (str[index] == (unsigned char)c)
		{
			return ((void *)(str + index));
		}
		index++;
	}
	return (NULL);
}
