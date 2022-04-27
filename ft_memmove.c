/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:58 by mabbas            #+#    #+#             */
/*   Updated: 2022/04/27 02:08:15 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>
#include<stdio.h>


 void *ft_memmove(void *dst, const void *src, size_t len)
 {
	unsigned int count;
	count = 0;

	const char *bak_src;
	char *bak_dest;

	// Typecasted for working with one byte at a time
	bak_src = (const char *)src;
	bak_dest = (char *)dst;

	if (dst < src)
	{
		while(count < len)
		{
			bak_dest[len - count] = bak_src[len - count];
			count++;
    	}
	}
	else
		{
			while(len > 0)
			{
				bak_dest[len] = bak_src[len];
				len--;

			}
		}
	return (bak_dest);
 }


void test()
{
	char arr[20] = { 1,2,3,4,5,6,7,8,9,10 };
	ft_memmove(arr + 2, arr, 4);
	printf("The destination string: %s",arr);
}
int main()
{
	test();
	return 0;
}