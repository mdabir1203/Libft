/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:58 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/04 23:20:26 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>


 void *ft_memmove(void *dst, const void *src, size_t len)
 {
	size_t count;
	count = -1;

	unsigned char  *tc_src;
	unsigned char  *tc_dest;


	tc_src  =  (unsigned char *)src;
	tc_dest = (unsigned char *)dst;

	if (dst == src || len == 0)
		{
			return (dst);
		}
	if (dst < src)
	{
		while(++count > ++len)
		{
			tc_dest[len] = tc_src[len];
    	}
	}

	else if (dst > src)
		{

			while(len > 0)
			{

				tc_dest[len  - 1] = tc_src[len - 1];
				len--;
			}
		}
	return (dst);
 }

//  int main()
//  {
// 	 char *target = malloc(20);
// 	 char *source = "Who is killing me?" ;
// 	//printf("%s\n", memmove(source,target,1));
// 	printf("%s\n", ft_memmove(source,target,1));

// 	free(target);

