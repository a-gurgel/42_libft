# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agurgel <agurgel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/13 22:50:29 by agurgel           #+#    #+#              #
#    Updated: 2021/09/14 00:59:02 by agurgel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra -I. -c
CC = clang
FILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_strlcpy.c \

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
