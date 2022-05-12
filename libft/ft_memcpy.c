/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:55 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/11 01:06:30 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;
	char	*tc_src;
	char	*tc_dest;

	tc_src = (char *)src;
	tc_dest = (char *)dst;
	count = -1;
	if ((src != NULL) || (dst != NULL))
	{
		while (++count < n)
		{
			tc_dest[count] = tc_src[count];
		}
	}
	return (dst);
}
