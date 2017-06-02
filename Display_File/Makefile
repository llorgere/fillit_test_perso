# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/11 14:29:59 by llorgere          #+#    #+#              #
#    Updated: 2017/04/11 14:55:32 by llorgere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_putchar.c ft_putstr.c ft_display_file.c main.c
OBJ = ft_putchar.o ft_putstr.o ft_display_file.o main.o
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : function.o
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

function.o :
	$(CC) -c $(CFLAGS) $(SRC)

clean : 
	/bin/rm -rf $(OBJ)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all
