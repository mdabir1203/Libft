/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:58 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 13:43:05 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tc_dest;
	unsigned char	*tc_src;
	size_t			indx;

	indx = 0;
	tc_src = (unsigned char *) src;
	tc_dest = (unsigned char *) dst;
	if (dst < src)
	{
		while (indx < len)
		{
			tc_dest[indx] = tc_src[indx];
			indx++;
		}
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			tc_dest[len - 1] = tc_src[len - 1];
			len--;
		}
	}
	return (dst);
}

/* 
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tc_src;
	unsigned char	*tc_dest;

	tc_src = (unsigned char *) src;
	tc_dest = (unsigned char *) dst;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			tc_dest[len - 1] = tc_src[len - 1];
			len--;
		}
	}
	return (tc_dest);
}
 */
/* #include<stdio.h>
int main(void)
{
	char s[] = {A, B, 67, 68, 69, 0, 45};
	//char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	//char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	//char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	//char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	//ft_memmove(s0, s, 7);
	ft_memmove(s, s + 2, 0);
	//ft_memmove(s, s + 2, 2);
	//ft_memmove(sResult + 1, sResult, 2);
		printf("Result of my my comparison: %s ", s);
} */
