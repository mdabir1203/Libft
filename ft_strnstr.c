/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:01:36 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 13:25:22 by mabbas           ###   ########.fr       */
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
 	5. The commented code is the condition for fixing security flaw
	 	in strnstr !! 
		if (pat_len > slen)
		return ((char *)""); 
*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *pattern, size_t slen)
{
	char	*sstr;
	char	*pstr;
	size_t	pat_len;

	sstr = (char *)str;
	pstr = (char *)pattern;
	pat_len = (size_t) ft_strlen(pstr);
	if (pstr[0] == '\0')
		return (sstr);
	if (slen == 0)
		return (0);
	while (*sstr && (slen-- >= pat_len))
	{
		if ((ft_strncmp(pstr, sstr, pat_len)) == 0)
			return (sstr);
		sstr++;
	}
	return (NULL);
}

/* #include <string.h>
static int main()
{
	char haystack[100] = "Hello";
	char needle[100] = "";
	char * empty = (char*)"";

	printf("%s\n",ft_strnstr(empty, "asd", -2));
	printf("%s\n",strnstr(empty, "asd", -2));
	printf (" Original: |%s| \n Duplicate:|%s| \n", \
	ft_strnstr(haystack,needle, 0), strnstr(haystack,needle,0));

} */
