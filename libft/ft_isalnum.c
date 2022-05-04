/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 03:30:42 by mabbas            #+#    #+#             */
/*   Updated: 2022/04/26 19:37:12 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum (int c)
{
    if((c >='A' && c<= 'Z') || (c >= 'a' && c<= 'z'))
    {
        return(1);
    }
    else if(c >= '0' && c <= '9')
    {
        return(1);
    }
    else
        return(0);
}



/*int main () {
   int var1 = 'Z';
   int var2 = '1';
   int var3 = '\t';
   int var4 = ' ';

   if( ft_isalnum(var1) ) {
      printf("var1 = |%c| is alphanumeric\n", var1 );
   } else {
      printf("var1 = |%c| is not alphanumeric\n", var1 );
   }

   if( ft_isalnum(var2) ) {
      printf("var2 = |%c| is alphanumeric\n", var2 );
   } else {
      printf("var2 = |%c| is not alphanumeric\n", var2 );
   }

   if( ft_isalnum(var3) ) {
      printf("var3 = |%c| is alphanumeric\n", var3 );
   } else {
      printf("var3 = |%c| is not alphanumeric\n", var3 );
   }

   if( ft_isalnum(var4) ) {
      printf("var4 = |%c| is alphanumeric\n", var4 );
   } else {
      printf("var4 = |%c| is not alphanumeric\n", var4 );
   }
   return(0);
}
*/