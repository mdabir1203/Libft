/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:01:36 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/14 04:30:21 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  null-terminated string needle - substr
 *	Working Process---- >>>>
 *	1. Empty needle condition
 *	2. Matching my pattern with comparing the memory bytes with the string
	to be searched.
 *	3. Bug fix : when we give -1 to slen it seg faults.dont fix
 *	4. *(str) -->>> having some contents inside it check condition
 	5.  */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t slen)
{
	size_t	n;

	n = ft_strlen(pattern);
	if (!pattern)
		return ((char *)str);
	while (slen-- >= n)
	{
		if (!(ft_strncmp(str, pattern, n)))
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/* #include <string.h>

int main()
{
	//char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	char *empty = (char*)"";

	printf("%s\n",ft_strnstr(empty,"Hello",-1));
	//printf("%s\n",strnstr(empty,"coucou",-1));
} */
