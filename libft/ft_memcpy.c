/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:55 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/04 05:49:00 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t count;
	char *bak_src;
	char *bak_dest;

	// Typecasted for working with one byte at a time
	bak_src = (char *)src;
	bak_dest = (char *)dst;

	//Copy stuff
	count = -1;
if (src != NULL  )
{
	while(++count < n)
	{
		bak_dest[count] = bak_src[count];
		//count++;
	}
}


	return (dst);
}



