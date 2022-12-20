/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_replace_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:20:20 by mabbas            #+#    #+#             */
/*   Updated: 2022/12/18 14:25:56 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_replace_str(char *str, const char *old_w, const char *new_w)
{
	int		i;
	int		sz_total;
	char	*ptr;
	char	*new_s;
	
	if (!str || !old_w || !new_w)
	{
		ft_ptr_free((void *)&str);
		return (NULL);
	}
	ptr = ft_strnstr(str, old_w, ft_strlen(str));
	if (!ptr)
		return (str);
	sz_total = ft_strlen(str) - ft_strlen(old_w) + ft_strlen(new_w) + 1;
	new_str = (char *)malloc(sizeof(char) * sz_total);
	if (!new_str)
		return ;
	ft_strlcpy(new_str, str, (ptr - str) + 1);
	ft_strlcat(new_str, new_w, sz_total);
	i = (ptr -str) + ft_strlen(old_word);
}