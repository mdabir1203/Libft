/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:59:20 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/18 16:37:18 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < (int)len)
		len = ft_strlen(s);
	newstr = malloc(sizeof (char) * (len + 1));
	//newstr = ft_strdup(s);
	if (!(newstr))
		return (NULL);
	if ((int) start >= ft_strlen(s))
		return (ft_strdup(""));
	newstr = ft_memcpy(newstr, s + start, len);
	newstr[len] = '\0';
	return (newstr);
}

/* int main(int argc, char *argv[])
{
	char *sad;
	sad = "01231231232131245";
	printf("The copied substring:%s", ft_substr(sad,0,100));

} */