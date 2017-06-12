/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libfil.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 14:44:49 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/12 17:37:19 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFIL_H
# define LIBFIL_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct	s_type
{
	int		pos;
	int		*pos_tet;
	int		num_te;
}				t_type;
typedef struct	s_type2
{
	int		col;
	int		row;
	int		i;
	int		j;
	char	**tab;
}				t_type2;
typedef struct	s_type3
{
	char	**square;
	char	**file;
	int		***coor;
	int		sq_s;
	int		nb_tetra;
}				t_type3;
typedef struct	s_type4
{
	int		**coor;
	int		ori[2];
	int		row;
	int		col;
	int		sq;
}				t_type4;
typedef struct	s_type5
{
	int		i;
	int		l;
	int		j;
	int		count_diese;
}				t_type5;
char			**ft_row_tetra(char *tetra);
int				**ft_coor_tetra(char **tetra);
char			**ft_new_square(int n);
int				ft_check_posi(char **square, int **tetra, int pos, int sq_size);
int				ft_tetra_nb_char(char *file);
char			**ft_tetra_valid(char *file, int n);
int				ft_check_tetra(char *tetra);
int				ft_backtracking(char **sq, int sq_s, int ***tet, int nb_tet);
char			**ft_new_square(int n);
char			**ft_put_tetra(char **sq, int **tet, t_type test, int sq_s);
char			**ft_rm_tetra(char **square, int **tetra, int pos, int sq_s);
int				***ft_tab_to_int(char **tetra, int nb_tetra);
void			ft_print_solved(t_type3 s);
t_type3			ft_square_enix(t_type3 s);

#endif
