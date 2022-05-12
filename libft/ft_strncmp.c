/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 17:01:13 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/12 14:18:29 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * compares not more than 'n' characters in strings
 * return value: an integer greater than, equal to, or less than 0
 * My nb starts from the end so it excludes the null byte
 * I have one issue to fix when the nb is higher value
 */
#include "libft.h"
#include<stdio.h>
#include<string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t nb)
{
	while (nb-- > 0 && (*str1 || *str2))
	{
		if (*str1 != *str2)
			return ((*(unsigned char *) str1) - (*(unsigned char *) str2));
	str1++;
	str2++;
	}
	return (0);
}
/*
int main()
{
	char s1[100] = "asjdhas\100";
	char s2[100] = "asjdhas\0";

	printf("The value of diff is: %d\n",ft_strncmp(s1,"",3));
	printf("The value of diff is: %d\n",ft_strncmp("",s2,0));
	printf("The value of diff is: %d\n",ft_strncmp(s1,s2,sizeof(s1)));
	printf("The value of diff is: %d\n",ft_strncmp(s1,s2,sizeof(s2)));



	printf("Original function working\n");
	printf("The value of diff is: %d\n",strncmp(s1,"",3));
	printf("The value of diff is: %d\n",strncmp("","",3));
	printf("The value of diff is: %d\n",strncmp(s1,s2,0));
	printf("The value of diff is: %d\n",strncmp(s1,s2,sizeof(s1)));
	printf("The value of diff is: %d\n",strncmp(s1,s2,sizeof(s2)));

} */