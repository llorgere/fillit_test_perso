#ifndef LIBFIL_H
# define LIBFIL_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	**ft_row_tetra(char *tetra);
int		**ft_coor_tetra(char **tetra);
char	**ft_new_square(int n);
int		ft_check_posi(char **square, int **tetra, int row, int col, int n);
int		ft_tetra_nb_char(char *file);
char	**ft_tetra_valid(char *file, int n);
int		ft_check_tetra(char *tetra);

#endif
