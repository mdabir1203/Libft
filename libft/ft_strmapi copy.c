/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 23:47:16 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 03:43:35 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief : Its about function pointers
 *          Fnc pointers stores start of executable codes
 *          it contains the entry point of all the instruction
 *          of a func int(*f)(int,char) 
 *          & NOT NEEDED. var type is imp
 * @check: Check for protection
 *         remember proper typecasting
 */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*str;

	index = 0;
	str = NULL;
	if (!s)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (str)
	{
		while (*(s + index) != '\0')
		{
			*(str + index) = (*f)(index, *(s + index));
			index++;
		}
	*(str + index) = '\0';
	}
	return (str);
}
