/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:56:57 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 17:35:58 by mabbas           ###   ########.fr       */
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
#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
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

/* int main()
{
	char *a;
	char *b;

	a = ft_calloc(3, sizeof(char));
	b = calloc(3, 4294967295);
	printf("Allocated memory is: %s",a);
	printf("Allocated memory is: %s",b);
} */