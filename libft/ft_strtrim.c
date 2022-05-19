/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:43:01 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/19 21:05:34 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * At first - Return a New copy(duplicate maybe)
 * the copied string must not contain the characters in "set"
 *  The character removed from the begin and the end
 */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	ldiff;
	char	*outstring;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
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

/* int	main(int argc, char *argv[])
{
	char	*str;
	char	*output;
	char	*set;

	output = malloc (sizeof (char) * (ft_strlen(str) + 1));
	str = "Who the fwck awr/www4ww?";
	set = "Wwww";
	output = ft_strtrim (str, set);
	printf("THe final output is: %s", *&output);
} */
