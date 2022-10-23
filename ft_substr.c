/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:59:20 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 13:25:45 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * Create a substring from a given string
 * Used strdup to duplicate the string and memory leak prevention
 * I prefer memcpy than strcpy as its more reliable
 * Problem is had to add a null-byte at the end
 * Malloc with len + 1 for the null byte
 * I used sub len to figure out my malloc size
 */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	max_len;
	size_t	str_len;
	size_t	sub_len;

	sub_len = 0;
	str_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if ((int) start >= ft_strlen(s))
		return (ft_strdup(""));
	max_len = str_len - start;
	if (max_len < len)
		sub_len = max_len;
	else if (max_len >= len)
		sub_len = len;
	newstr = malloc(sub_len + 1);
	if (newstr == NULL)
		return (0);
	ft_memcpy(newstr, (char *)(s + start), sub_len);
	newstr[sub_len] = '\0';
	return (newstr);
}

/* char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int) ft_strlen(s))
		return (ft_strdup(""));
	if ((unsigned int)ft_strlen(s) < len)
		len = ft_strlen(s);
	newstr = malloc(sizeof (char) * (len + 1));
	if (!newstr)
		return (NULL);
	ft_memcpy(newstr, (s + start), len);
	newstr[len] = '\0';
	return (newstr);
}
 */
/* #include<stdio.h>
static int main()
{
	char *sad;
	sad = "Hello";
	printf("The copied substring:%s", ft_substr(sad,6,100000000));

} */