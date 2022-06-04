/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:29:07 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/03 14:45:35 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * 
 */

#include "libft.h"

static	size_t	ft_sen_len(char const *str, char d)
{
	int	i;
	int	sen_c;

	i = 0;
	sen_c = 0;
	while (str[i] != '\0' )
	{
		while (str[i] == d)
			i++;
		if (str[i])
		{
			while (str[i] != '\0' && str[i] != d)
			{
				i++;
			}
		sen_c++;
		}
	}
	return (sen_c);
}

static void	ft_arr_fill(char **res_arr, char const *instr, char d, int i)
{
	int	j;
	int	len;
	int	begin;

	j = 0;
	while (instr[i] != '\0')
	{
		if (instr[i] != d)
		{
			len = 0;
			begin = i;
			while (instr[i] != d && instr[i] != 0)
			{
				len++;
				i++;
			}
			res_arr[j] = (char *) ft_substr(instr, begin, len);
			if (len != 0)
				j++;
		}
		else
			i++;
	}
	res_arr[j] = 0;
}

char	**ft_split(char const *str, char d)
{
	char	**result_arr;

	if (str == NULL)
		return (NULL);
	result_arr = (char **) ft_calloc(ft_sen_len(str, d) + 1, sizeof(char *));
	if (!result_arr)
		return (NULL);
	ft_arr_fill(result_arr, str, d, 0);
	return (result_arr);
}
