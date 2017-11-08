# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsaadia <dsaadia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/27 15:09:19 by dsaadia           #+#    #+#              #
#    Updated: 2017/11/07 19:40:59 by dsaadia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC_C = fcts.c ft_cat.c main.c
SRC_O = fcts.o ft_cat.o main.o

all: $(NAME)

$(NAME):
	@gcc -c $(SRC_C)
	@gcc -o $(NAME) $(SRC_O)
	@rm -f $(SRC_O)

clean:
	@rm -f $(SRC_O)

fclean: clean
	@rm -f $(NAME)

re: fclean all
