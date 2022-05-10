/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/10 19:02:45 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Appends src to string dst of size siz
 * size is the full size of dst, not space left.
 * At most size-1 characters copied
 * Always NULL terminates (unless size <= strlen(dst)).
 * Returns strlen(src) + MIN(siz, strlen(initial dst)).
 * If retval >= siz, truncation occurred.
 *
 */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		d_len;

	d = dst;
	s = src;
	n = len;
	d_len = 0;
	while ((n-- != 0) && (*d != '\0'))
		d++;
	d_len = d - dst;
	n = len - d_len;
	if (n == 0)
		return (d_len + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
			ft_memcpy (d++, s, n--);
	s++;
	}
	*d = '\0';
	return (d_len + (s - src));
}
