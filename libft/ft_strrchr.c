/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:01:51 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/10 20:02:02 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<string.h>

// char	*ft_strrchr(const char *s, int c)
// {
// 	const char	*match;
// 	const char	*res;

// 	if ((unsigned char)c == '\0')
// 		return (ft_strchr (s, '\0'));
// 	match = NULL;
// 	res = ft_strrchr(s, c);
// 	while (res != NULL)
// 	{
// 		match = res;
// 		s = res + 1;
// 	}
// 	return ((char *)res);
// }


char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	return (NULL);
}


int main()
{
	char a[20] = "ahsdkahsdk";
	int d = 'd';
}