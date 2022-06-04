/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:43:01 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 13:43:35 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * At first - Return a New copy(duplicate maybe)
 * the copied string must not contain the characters in "set"
 *  The character removed from the begin and the end
 *  +1 is used to include a NULL byte
 *  This could also done using substr at the end
 *  Any  optimization idea will be valued
 */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	ldiff;
	char	*outstring;

	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = 0;
	while (s1[begin] && (ft_strchr(set, s1[begin])))
		begin++;
	end = ft_strlen(s1);
	while ((s1[end -1]) && (ft_strchr(set, s1[end -1])) && (end > begin))
			end--;
	ldiff = end - begin;
	outstring = (char *) malloc(sizeof(char) * (ldiff + 1));
	if (!outstring)
		return (NULL);
	ft_strlcpy(outstring, &s1[begin], ldiff + 1);
	return (outstring);
}

/* #include<stdio.h>
static int	main(int argc, char *argv[])
{
	char	*str;
	char	*output;
	char	*set;

	str = "  Who the fuck am I Who     §123 ";
	set = " Who";
	output = ft_strtrim (str, set);
	printf("THe final output is: %s", *&output);
} */