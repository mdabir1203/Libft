/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:40:13 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/05 18:18:39 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char char_match;

	char_match = c;

	if (*s == '\0')
	{
		return (NULL);
	}
	else
	{
		while (*s != '\0')
		{
			if (*s)
			{
				return (0);
			}
		s++;
		}
	}

}
