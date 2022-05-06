/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/06 12:46:07 by mabbas           ###   ########.fr       */
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


size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	len;
	size_t	rlen;

	len = 0;
	rlen = ft_strlen(src);
	if (dsize)
	{
		if (rlen >= dsize)
		{
			return (ft_strlen(src));
		}
		else if (rlen == dsize -1)
		{
			ft_memcpy(dst, src, len);
			dst[len] = '\0';
		}
	}
	return (rlen);
}

int main(int argc, char *argv[])
{
	char *result;
	(cast) result = ft_strlcat (argv[1],argv[2], 5);
	printf ("My output is:%s", &*result);

}