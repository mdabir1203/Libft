/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:29:58 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/03 10:03:24 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
