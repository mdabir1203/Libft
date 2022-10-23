/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:56:57 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/19 14:01:01 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Used to dynamically allocate memory
 *  Initializes allocated memory to 0
 * @param nvar --  no of var to allocate memory
 * @param size -- size of bytes of a single var
 * @return 		   pointer
 * Needs to check with larger pointers !!
 */

#include "libft.h"

void	*ft_calloc(size_t nvar, size_t elmsize)
{
	void	*inptr;
	size_t	totalsize;

	inptr = NULL;
	totalsize = nvar * elmsize;
	if (nvar && elmsize != (totalsize / nvar))
		return (inptr);
	inptr = malloc(nvar * elmsize);
	if (inptr)
		ft_bzero (inptr, nvar * elmsize);
	return (inptr);
}
