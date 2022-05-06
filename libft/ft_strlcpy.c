/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 19:37:50 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/06 04:42:12 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* size-bounded string copying and concatenation */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t n;
	unsigned char *d;
	const char *s;

	d = dst;
	s = src;
	if(dstsize == 0)
	{
		return (0);
	}

	n = -1;
	{
		while (dstsize - n -1)
		{
			tc_dest[count] = tc_src[count];
		}
	}
	d[n] = '\0';
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