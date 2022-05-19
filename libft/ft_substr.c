/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:59:20 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/19 10:45:15 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * Create a substring from a given string
 * Used strdup to duplicate the string and memory leak prevention
 * I prefer memcpy than strcpy as its more reliable
 * Problem is had to add a null-byte at the end
 * Malloc with len + 1 for the null byte
 */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s == NULL)
		return (NULL);
	if ((int) start >= ft_strlen(s))
		return (ft_strdup(""));
	if ((unsigned int)ft_strlen(s) < len)
		len = ft_strlen(s);
	newstr = malloc(sizeof (char) * (len + 1));
	if (!(newstr))
		return (NULL);
	newstr = ft_memcpy(newstr, (char *)(s + start), len);
	newstr[len] = '\0';
	return (newstr);
}

/* #include<stdio.h>
int main(int argc, char *argv[])
{
	char *sad;
	sad = "Hello";
	printf("The copied substring:%s", ft_substr(sad,6,100000000));

} */