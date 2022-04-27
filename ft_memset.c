/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 18:30:01 by mabbas            #+#    #+#             */
/*   Updated: 2022/04/26 20:16:30 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>
#include<stdio.h>

void	*ft_memset(void *b, int c, size_t len)

{
	int	count;
	char *p;

	p = (char*) b;
	// typecast it -->> because void pointer

	count = -1;

	while(++count < len)
	{
		p[count] = c;
		//count++;
	}

	return (p);
}

/*
int main()
{
	unsigned int j = 5;
	char a[20] = "WhothefuckIam";

	printf("\nBefore memset(): %s\n", a);
	//char i = 'h';

	ft_memset(a, 'A', j);
	//memset(a,'A',j);
	printf("After memset():  %s", a);


} */