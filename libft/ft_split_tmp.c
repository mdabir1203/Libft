/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 23:29:07 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/22 23:34:34 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_split (char *s, char d)
{
    char *input;
    char *result;
    size_t index;

    input = NULL;
    result = NULL; // initialize input string
    if (s != NULL)
        input = s;

    if (input == NULL)
        return (NULL); // final token
    result = malloc(sizeof(char) * (ft_strlen(input) + 1)) ; 
    result = (char) ft_strlen (input) + 1;   // I have to learn typecasting shit !! 

    index = 0;

    while (input[index] != '\0') // If d is not found add and copy char into array 
    {
        if (input[index] != d)
            result[index] = input[index];
        else
        {
            result[index] = '\0';
            input = input + index + 1;
            return result;
        }
        index++;
    }
    result[index] = '\0'; // Ends the array here 
    input = NULL;
    return result;
}
