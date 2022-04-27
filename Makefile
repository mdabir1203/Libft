# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabbas <mabbas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/25 17:54:37 by mabbas            #+#    #+#              #
#    Updated: 2022/04/26 01:31:58 by mabbas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a 
#define compiler and flags
CC = gcc 
CFLAGS = -Wall -Wextra -Werror
#Source Functions for the library
source = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

# The object files after compiling 
objects = $(source:.c=.o)


$(NAME): echo "library name libft"
		$(objects)
		ar rcs $(NAME) $(objects)

all: echo "Compiling $(NAME)"
	ar rc $(NAME)  $(objects)
	$(CC) $(CFLAGS) $(objects) -c $(NAME)
clean: echo "Cleaning temporary executable files"
	rm -f $(objects)
fclean: echo "Removing temporary,executable and object files -- whole library"
		clean
		rm -f $(NAME)
re: fclean $(NAME)

.PHONY : all clean fclean re 
