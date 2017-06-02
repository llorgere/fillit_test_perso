# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 12:55:31 by llorgere          #+#    #+#              #
#    Updated: 2017/05/30 16:54:47 by acolas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ft_tetra_nb_char.c \
	  ft_check_tetra.c \
	  ft_tetra_valid.c \
	  main.c \
	  ft_coor_tetra.c
CC = gcc
HEADER = ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror
.PHONY : all clean fclean re

all : $(NAME)

$(NAME) :
	@make -C libft
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(HEADER)

clean :
	@make -C libft clean
	@/bin/rm -rf $(OBJ)

fclean : clean
	@make -C libft fclean
	@/bin/rm -rf $(NAME)

re : fclean all
