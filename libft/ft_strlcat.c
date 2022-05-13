/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/13 16:56:14 by mabbas           ###   ########.fr       */
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
	size_t		d_len_empty;
	size_t		d_len;

	d = dst;
	s = (char *) src;
	d_len_empty = len;
	d_len = 0;
	while ((d_len_empty-- != 0) && (*d != '\0'))
		d++;
	d_len = d - dst;
	d_len_empty = len - d_len;
	if (d_len_empty == 0)
		return (d_len + ft_strlen(s));
	while (*s != '\0' )
	{
		if (d_len_empty != 1)
			ft_strlcpy (d++, s, d_len_empty--);
	s++;
	}
	*d = '\0';
	return (d_len + (s - src));
}
