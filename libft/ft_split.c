/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:13:25 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/20 00:49:14 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *str, char delimiters)
{
	char	*aux_string;
	char	*tmp;
	size_t	count;

	aux_string = (char *)malloc(sizeof(char) * ft_strlen(s));
	aux_string = ft_strdup(s);
	tmp = aux_string;
	count = 0;
	while (*tmp != '\0')
	{
		if (*tmp == c)
			count++;
		tmp++;
	}
	*tmp = NULL;
	while(!)


}