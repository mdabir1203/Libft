/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:50:11 by mabbas            #+#    #+#             */
/*   Updated: 2022/04/26 19:37:19 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if(c>= 0 && c <=127)
    {
        return(1);
    }
    else
        return(0);
}

/*
#include <stdio.h>
char the_chars[] = { 'A', 0x80, 'Z', '2' , '\t' };

#define SIZE sizeof( the_chars ) / sizeof( char )

int main( void )
{
    int i = 0;

    while (i < SIZE)
        {
            if( ft_isascii( (unsigned)the_chars[i] ) )
            {
            printf( "Char %c is an ASCII character\n",
                the_chars[i] );
            }
            else
            {
            printf( "Char %c is not an ASCII character\n",
                the_chars[i] );
            }
            i++;
        }


    return 1;
}
*/