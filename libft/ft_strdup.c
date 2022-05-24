/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 21:56:51 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 19:02:08 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief save a copy of a string
 *	Checked for sufficient memory at beginning
 *	The size is also checked with the NULL byte
 *	Used memcpy rather than strcpy as its better to work with memory and
	prevent memory leaks.
 *  strdup() is used to duplicate a string. It returns a pointer
 	to null-terminated byte string.
 */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*auxstring;
	size_t	size;

	size = ft_strlen(string) + 1;
	auxstring = malloc(size);
	if (string == NULL || !auxstring)
		return (NULL);
	ft_memcpy(auxstring, string, size);
	return (auxstring);
}

/* int	main(int argc, char *argv[])
{
	char	*result;
	int		i;

	i = 0;
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		result = ft_strdup(argv[1]);
		printf ("copied string is:%s ",result);
		free(result);

	}
} */