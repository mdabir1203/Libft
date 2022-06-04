/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 04:55:22 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 12:07:51 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Things to check here -- I used '\n' so that it is converted to int
 * 							and work with with. It prints out string with 
 * 							a new line
 */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
