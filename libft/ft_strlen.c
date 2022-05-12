/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 04:35:11 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/12 12:16:53 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen (const char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return (len);
}

/* int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return (0);
    }
    else
    {
        int i =1;
        char result;
        while(i < argc)
        {
            result = ft_strlen(argv[i]);
            i++;

        }
          // It takes input from the file directly

        printf("Length of the string is: %d", result);
    }
} */