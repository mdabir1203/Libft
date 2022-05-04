/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 01:50:32 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/03 17:23:28 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Function to check if the passed char is Alphabetic */


#include "libft.h"

int ft_isalpha(int c)
{

    if(c >= 'A' && c <= 'Z')
    {
        return(1);
    }
    else if(c >= 'a' && c <= 'z' )
    {
        return(1);
    }
    else
        return(0);
}

/*
int main (int argc,char *argv[]) {
   int var1 = 'A';
   int var2 = '2';
   int var3 = '\t';
   int var4 = ' ';

   if( ft_isalpha(var1) ) {
      printf("var1 = |%c| is an alphabet\n", var1 );
   } else {
      printf("var1 = |%c| is not an alphabet\n", var1 );
   }

   if( ft_isalpha(var2) ) {
      printf("var2 = |%c| is an alphabet\n", var2 );
   } else {
      printf("var2 = |%c| is not an alphabet\n", var2 );
   }

   if( ft_isalpha(var3) ) {
      printf("var3 = |%c| is an alphabet\n", var3 );
   } else {
      printf("var3 = |%c| is not an alphabet\n", var3 );
   }

   if( ft_isalpha(var4) ) {
      printf("var4 = |%c| is an alphabet\n", var4 );
   } else {
      printf("var4 = |%c| is not an alphabet\n", var4 );
   }

   return(0);
}
*/