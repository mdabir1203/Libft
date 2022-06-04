/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:30:01 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/17 01:19:15 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	count;
	char			*p;

	p = (char *)b;
	count = 0;
	while (count < len)
	{
		p[count] = c ;
		count++;
	}
	p = (void *)b ;
	return (b);
}
