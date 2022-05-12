/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:01:36 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/12 14:46:03 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  * locates the first occurrence -strchr
 *  null-terminated string needle - substr
 *	Working Process---- >>>>
 *	1. Empty needle condition
 *	2. Matching my pattern with comparing the memory bytes with the string
	to be searched.
 *	3. Bug fix : when we give -1 to slen it seg faults ?? How to fix it ?
 *	4. *(str) -->>> having some contents inside it check condition
 	5. (typecasted to int for supporting data range) 2 */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str, const char *pattern, size_t slen)
{
	size_t	n;

	n = ft_strlen(pattern);
	if (*str == 0)
		return (NULL);
	if (pattern == 0 || (int) slen < 0)
		return ((char *)str);
	while (slen >= n)
	{
		slen--;
		if (!ft_memcmp(str, pattern, n))
			return ((char *)&str[0]);
		str++;
	}
	return (NULL);
}
/*
int main()
{
	char s1[100] = "hello dasjdasdn qejwqkejw qjenwej";
	char s2[10] =  "hello";

	printf("%s\n",ft_strnstr(s1,s2,-1));
	printf("%s\n",strnstr(s1,s2,-1));
} */