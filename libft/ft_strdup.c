/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:56:51 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/17 01:58:42 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief save a copy of a string
 *	Checked for sufficient memory at beginning
 *	The size is also checked with the NULL byte
 *	Used memcpy rather than strcpy as its better to work with memory and
	prevent memory leaks.
 */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*auxstring;
	size_t	size;

	if (string == NULL)
		return (NULL);
	size = ft_strlen(string) + 1;
	auxstring = malloc(size);
	if (string)
	{
		ft_memcpy(auxstring, string, size);
	}
	return (auxstring);
}
