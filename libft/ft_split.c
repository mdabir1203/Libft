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

static int ft_sen_len(char *str, char d)
{
    int i;
    int sen_c;

    i = 0;
    sen_c = 0;
    while (str[i])
    {
        while (str[i] == d)
            i++;
        if (str[i])
        {
            while (str[i] && str[i] != d)
                i++;
            sen_c++;
        }
    }
    return (sen_c);
}

static void ft_arr_fill(char **bstr, char *lstr, char d)
{
    int i;
    int j;
    int len;
    int begin;


    i = 0;
    j = 0;
    while (lstr[i] != '\0')
    {
        if(lstr[i] != d)
        {
            len = 0;
            begin = i;
            while (lstr[i] != d)
            {
                len++;
                i++;
            }
            bstr[j] = (char *) ft_substr(lstr,begin,len);
            if(len != 0)
                j++; // derefence my content and fill it
        }
        else
            i++;
    }
    bstr[j] = 0;
}


char **ft_split(char *str, char d)
{
    char **result_arr;

    result_arr = (char **)malloc ( sizeof(char *) * ft_sen_len(str,d) + 1) ;
    if (!result_arr)
        return (NULL);
    ft_arr_fill(result_arr, str, d);
    //result_arr[ft_sen_len (str,d)] = 0;
    return (result_arr);
}
