/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 04:43:06 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/19 09:44:55 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *string1, char const *string2)
{
	char	*newstring;
	size_t	total_length;

	total_length = 0;
	total_length = ft_strlen(string1) + ft_strlen(string2);
	newstring = malloc(sizeof(char) * (total_length + 1));
	if (newstring == NULL)
		return (NULL);
	ft_memcpy(newstring, string1, total_length);
	newstring[total_length] = '\0';
	ft_strlcat(newstring, string2, total_length + 1);
	return (newstring);
}

/* #include <stdio.h>

int main()
{
	char s1[100] = "";
	char string2[20] = " 13asda%%%%    sdasd";
	char *result;

	result = ft_strjoin (s1, string2);
	printf("The final output: |%s|", result);
} */