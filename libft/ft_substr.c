/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:59:20 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/19 10:24:43 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;

	if (s == NULL)
		return (NULL);
	newstr = NULL;
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

/* int main(int argc, char *argv[])
{
	char *sad;
	sad = "01231231232131245";
	printf("The copied substring:%s", ft_substr(sad,0,100));

} */