#ifndef LIBFIL_H
# define LIBFIL_H
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	**ft_row_tetra(char *tetra);
int		**ft_coor_tetra(char **tetra);
char	**ft_new_square(int n);
int		ft_check_posi(char **square, int **tetra, int pos, int sq_size);
int		ft_tetra_nb_char(char *file);
char	**ft_tetra_valid(char *file, int n);
int		ft_check_tetra(char *tetra);
int		ft_backtracking_ite(char **square, int sq_s, int ***tab, int nb_tetra);
char	**ft_new_square(int n);
char	**ft_put_tetra(char **square, int **tetra, int col, int row, int num_tetra);
char	**ft_rm_tetra(char **square, int **tetra, int pos, int sq_s);
int		***ft_tab_to_int(char **tetra, int nb_tetra);


#endif
