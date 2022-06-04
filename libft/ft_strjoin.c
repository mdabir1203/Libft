/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 04:43:06 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 13:24:47 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Concatenation of two given string and return a new string
 * Used memcpy and strlcat . memcpy is used first to avoid overlapping behavior
 * Maybe still have memory leaks due to working strlen and joining them
 * Checking protection by using Null for arg of the function
 */
#include "libft.h"

char	*ft_strjoin(char const *string1, char const *string2)
{
	char	*newstring;
	size_t	total_length;

	total_length = 0;
	if (!string1 || !string2)
		return (NULL);
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

static int main()
{
	char s1[100] = "";
	char string2[20] = " 13asda%%%%    sdasd";
	char *result;

	result = ft_strjoin (s1, string2);
	printf("The final output: |%s|", result);
} */