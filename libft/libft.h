/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:31:23 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/04 14:15:49 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	LIBFT_H
#define	LIBFT_H

#include<stdio.h>
#include<unistd.h>
#include<string.h>

int	ft_isalpha(int c);
int	ft_isdigit(int digit);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char *str);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	ft_strlcpy(char *dst, const char *src, size_t size);
void	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower_l(int c);
//char	ft_strchr(const char *s, int c);
//int	ft_strncmp(const char *s1, const char *s2, size_t n);
//int	ft_memcmp(const void *s1, const void *s2, size_t n);
//char	ft_strnstr(const char *haystack, const char *needle, size_t len);
//int	ft_atoi(const char *str);

#endif