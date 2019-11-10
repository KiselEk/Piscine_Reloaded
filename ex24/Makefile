# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsabina <jsabina@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 16:41:26 by jsabina           #+#    #+#              #
#    Updated: 2019/09/09 14:01:39 by jsabina          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs
INC = includes

FILE_O = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)/ft_putchar.c $(SRC)/ft_putstr.c $(SRC)/ft_strcmp.c $(SRC)/ft_strlen.c $(SRC)/ft_swap.c -I $(INC)
	ar rc $(NAME) *.o

clean:
	rm -rf $(FILE_O)

fclean: clean
	rm -rf $(NAME)

re: fclean all
