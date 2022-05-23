/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:29:07 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/23 14:35:43 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_sen_len(char *str,char d)
{
    int i;
    int wrd_c;

    i = 0;
    wrd_c = 0;
    while(str[i])
    {
        while(str[i] == d)
            i++;
        if(str[i])
        {
            while(str[i] && str[i] != d)
                i++;
            sen_c++;
        }
    }
    return (sen_c);
}

static int ft_arr_fill(char *str, int i, char *d)
{
    int c;
    c = 0;
    while(str[i] && str[i] != d)
    {
        i++;
        c++;
    }
}

char    **ft_split(char *str, char d)
{
    char **result_arr;

    result_arr = (char **)malloc(sizeof(char *) * ft_sen_len(str,d) + 1));
    if (!result_arr)
        return (NULL);
    ft_fill_array(result_arr,str,d)
    return (result_arr);
}

#include<stdio.h>

int main(void)
{
    printf("%d", num_words("    abir   is   here, sd,ad dsadas a das ",','));
    printf("%s", ft_substr("this is a sentence",0,ft_strlen(s)));
}