# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llorgere <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/15 12:55:31 by llorgere          #+#    #+#              #
#    Updated: 2017/06/09 18:08:54 by acolas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRC = ft_tetra_nb_char.c \
	  ft_check_tetra.c \
	  ft_tetra_valid.c \
	  main.c \
	  ft_coor_tetra.c \
	  ft_backtracking.c \
	  ft_check_posi.c \
	  ft_new_square.c \
	  ft_put_tetra.c \
	  ft_rm_tetra.c \
	  ft_tab_to_int.c \
	  ft_print_solved.c \
	  ft_row_tetra.c \
	  ft_square_enix.c

CC = gcc
OBJ = $(SRC:.c=.o)
HEADER = ./libft/libft.a
CFLAGS = -Wall -Wextra -Werror
.PHONY : all clean fclean re

all : $(NAME)

%.o:%.c
	@$(CC) $(CFLAGS) -I./$(INCLUDE) -o $@ -c $<

$(NAME) : $(OBJ)
	@make -C libft
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(HEADER)

clean :
	@make -C libft clean
	@/bin/rm -rf $(OBJ)

fclean : clean
	@make -C libft fclean
	@/bin/rm -rf $(NAME)

re : fclean all
