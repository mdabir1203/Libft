/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:29:07 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 01:42:01 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_sen_len(char *str, char d)
{
	int	i;
	int	sen_c;

	i = 0;
	sen_c = 0;
	while (str[i] != '\0')
	{
		while (str[i] == d)
			i++;
		if (str[i])
		{
			while (str[i] != '\0' && str[i] != d)
				i++;
				sen_c++;
		}
	}
	return (sen_c);
}

static void	ft_arr_fill(char **res_arr, char *instr, char d)
{
	int	i;
	int	j;
	int	len;
	int	begin;

	i = 0;
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

char	**ft_split(char *str, char d)
{
	char	**result_arr;

	result_arr = (char **) calloc(ft_sen_len(str, d) + 1, sizeof(char *));
	if (!result_arr)
		return (NULL);
	ft_arr_fill(result_arr, str, d);
	return (result_arr);
}

/* #include<stdio.h>

int main()
{
    char *s = "Abir_is_my_sentence";
    char **r;
    
    r = ft_split(s,'_');
    printf("%s",r[1]);
} */