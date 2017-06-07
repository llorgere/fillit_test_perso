# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 12:55:31 by llorgere          #+#    #+#              #
#    Updated: 2017/06/02 18:24:47 by llorgere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ft_tetra_nb_char.c \
	  ft_check_tetra.c \
	  ft_tetra_valid.c \
	  main.c \
	  ft_coor_tetra.c \
	  ft_backtracking_ite.c \
	  ft_check_posi.c \
	  ft_new_square.c \
	  ft_put_tetra.c \
	  ft_rm_tetra.c \
	  ft_tab_to_int.c

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
