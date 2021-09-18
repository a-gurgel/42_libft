# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 22:50:29 by agurgel           #+#    #+#              #
#    Updated: 2021/09/18 01:15:08 by agurgel          ###   ########.fr        #
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
		*ft_strchr.c \
		*ft_strrchr.c \
		ft_memchr.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_strnstr.c \
		*ft_strnstr.c \
		ft_atoi.c \
		*ft_calloc.c \
		*ft_strdup.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \


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
