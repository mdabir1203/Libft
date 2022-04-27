/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:55 by mabbas            #+#    #+#             */
/*   Updated: 2022/04/27 01:58:36 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>
void *memcpy(void *dst, const void *src, size_t n)
{
	int count;
	char *bak_src;
	char *bak_dest;

	// Typecasted for working with one byte at a time
	*bak_src = (char *)src;
	*bak_dest = (char *)dst;

	//Copy stuff
	count = -1;

	while(++count < n)
	{
		bak_dest[count] = bak_src[count];
	}

	return (dst);
}