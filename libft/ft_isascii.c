/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:39:08 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/12 23:40:43 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
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