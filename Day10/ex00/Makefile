# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgunes <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/20 15:59:14 by dgunes            #+#    #+#              #
#    Updated: 2018/09/20 15:59:21 by dgunes           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror
HEADER = ./includes/

all: $(NAME)
	
$(NAME):
	gcc $(FLAGS) -c $(SRC)ft_putchar.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_putstr.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_strcmp.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_strlen.c -I $(HEADER)
	gcc $(FLAGS) -c $(SRC)ft_swap.c -I $(HEADER)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all
