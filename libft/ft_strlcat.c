/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:02:37 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/01 00:07:27 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Appends src to string dst of size siz
 * size is the full size of dst, not space left.
 * At most size-1 characters copied
 * Always NULL terminates (unless size <= strlen(dst)).
 * Returns strlen(src) + MIN(siz, strlen(initial dst)).
 * If retval >= siz, truncation occurred.
 * tmpdest++ mean increase the value tmpdst = tmpdst + 1
 */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)
{
	char		*tmpdest;
	const char	*tmpsrc;
	size_t		d_len_empty;
	size_t		d_len;

	tmpdest = dst;
	tmpsrc = (char *) src;
	d_len_empty = len;
	d_len = 0;
	while ((d_len_empty-- != 0) && (*tmpdest != '\0'))
	{
		tmpdest++;
	}	
	d_len = tmpdest - dst;
	d_len_empty = len - d_len;
	if (d_len_empty == 0)
		return (d_len + ft_strlen(tmpsrc));
	while (*tmpsrc != '\0' )
	{
		if (d_len_empty != 1)
			ft_strlcpy (tmpdest++, tmpsrc, d_len_empty--);
	tmpsrc++;
	}
	*tmpdest = '\0';
	return (d_len + (tmpsrc - src));
}
