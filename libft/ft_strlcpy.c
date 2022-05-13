/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:37:50 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/13 12:52:39 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * size-bounded string copying and concatenation
 **Condtions:
 * strlcpy() copies up to dstsize - 1 characters
 * NUL-terminating the result if dstsize is not 0.
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dest_len)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < dest_len)
	{
		ft_memcpy(dst, src, srclen + 1);
	}
	else if (dest_len != 0)
	{
		ft_memcpy(dst, src, dest_len -1);
		dst[dest_len -1] = '\0';
	}
	return (srclen);
}

/* #include<stdio.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
    #define const_1 "how are you?"
	#define const_2	""

	int situation
}
 */
