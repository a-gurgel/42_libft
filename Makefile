# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 22:50:29 by agurgel           #+#    #+#              #
#    Updated: 2021/09/15 00:04:36 by agurgel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I. -c
CC = clang
FILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memchr.c \


OBJFILES = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJFILES)
	ar rcs $@ $^

$(OBJFILES): $(FILES)
	$(CC) $(CFLAGS) $^
	
clean:
	rm -f $(OBJFILES)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
