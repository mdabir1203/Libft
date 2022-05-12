/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:09:41 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/12 14:13:29 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') \
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
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