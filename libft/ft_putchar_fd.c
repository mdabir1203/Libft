/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 17:02:33 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/24 12:21:52 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *param: fd -- Its the file descriptor
			   0 = stdin -- > input from T
			   1 = stdout --> Direct to the terminal
			   2 = stderr --> Show error message
 * 				Also used write which uses the unistd.h library!! 
				in write 2nd Parameter takes const void *buffer
 */
#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
