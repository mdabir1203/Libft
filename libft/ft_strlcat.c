/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/06 17:41:46 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Appends src to string dst of size siz
 * size is the full size of dst, not space left.
 * At most size-1 characters copied
 * Always NULL terminates (unless size <= strlen(dst)).
 * Returns strlen(src) + MIN(siz, strlen(initial dst)).
 * If retval >= siz, truncation occurred.
 *
 */
#include "libft.h"
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	dsize -= dlen + 1;
	if (!dsize)
	{
		return (dlen);
	}
	slen = ft_strlen(src);
	if (slen > dsize)
	{
		slen = dsize;
	}

	ft_memcpy ( dst+dlen, src, slen );
	dst[dlen + slen] = '\0';
	return (dlen + slen);
}

/*
int	main(void)
{
 	char dst[9] = "moon";
 	char	src[] = "basic";
 	printf("%ld", ft_strlcat(dst, src, 3));
	printf("%s", dst);
 	return (0);
}
	//write(1, result,sizeof(result));
 */