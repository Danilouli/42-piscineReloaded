# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: schmurz <schmurz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 17:27:43 by schmurz           #+#    #+#              #
#    Updated: 2017/11/07 18:10:35 by schmurz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

null :=
space := ${null} ${null}

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCDIR = includes/
SRCDIR = srcs/
SRCFILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC = $(subst ${space}, $(SRCDIR), $(SRCFILES))
OBJ = $(SRCFILES:.c=.o)

all:  $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -I $(INCDIR) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) $(NAME:.a=.so)

re: fclean all