# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 17:54:37 by mabbas            #+#    #+#              #
#    Updated: 2022/05/18 12:35:39 by mabbas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
#define compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror
#Source Functions for the library
source = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_strlen.c ft_memcpy.c ft_memset.c ft_bzero.c  \
		 ft_atoi.c ft_memmove.c ft_toupper.c \
		 ft_tolower.c ft_strlcpy.c ft_strlcat.c ft_putchar_fd.c ft_putstr_fd.c \
		 ft_memchr.c ft_strchr.c ft_memcmp.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
		 ft_calloc.c ft_strdup.c ft_substr.c
# The object files after compiling
objects = $(source:%.c=%.o)

$(NAME): all

all :
	@echo "Beware!! We are now Compiling <<<<<-->>>> !__!"
	$(CC) $(CFLAGS) -c $(source)
	ar rcs $(NAME) $(objects)

clean :
	@echo "Time to clean up the dishes !! --- !!"
	rm -f $(objects)

fclean: clean
	@echo "The Genie is now going to remove all the garbages and index"
	rm -rf $(NAME)


re: fclean all


.PHONY : all clean fclean re
