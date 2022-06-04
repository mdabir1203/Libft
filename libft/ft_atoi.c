/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 01:09:57 by mabbas            #+#    #+#             */
/*   Updated: 2022/06/04 14:58:11 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief : Converting ASCII string to Integer
 *		--- >>> thread safe and cancel safe
		--- >> Imp Issues: Converting Whitespaces and unprintable char to int
 *	return : Returns Int values
 *	Time complexity is 0(n) -- >> Length of input string
 *	Checking the whitespaces .. Return the value if not found
 *  IF NEG VALUES CONVERT TO POS BY -1
 *
 */

#include "libft.h"

static	int	check(const char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\v' || \
		ch == '\r' || ch == '\n' || ch == '\f')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		decimal_val;
	int		result;
	char	*substring;

	substring = (char *) str;
	sign = 1;
	decimal_val = 0;
	result = 0;
	while (check(*substring) == 1)
		substring++;
	if (*substring == '-')
	{
		substring++;
		sign *= -1;
	}
	else if (*substring == '+')
		substring++;
	while ((*substring >= '0' && *substring <= '9') && *substring != '\0')
	{
		decimal_val = *substring - '0';
		result = result * 10 + decimal_val;
		substring++;
	}
	return (result * sign);
}

/* #include<stdio.h>
#include<stdlib.h>

static int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	dup;
		int	original;
		dup = ft_atoi(av[1]);
		original = atoi(av[1]);
		printf("dup: %d\n | original: %d\n", dup, original);
		return (0);
	}
}
 */