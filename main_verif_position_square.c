/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_verif_position_square.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 13:44:43 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 17:20:26 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_check_posi(char **square, int **tetra, int row, int col, int n);
char	**ft_new_square(int n);
int		**ft_coor_tetra(char **tetra);
char	**ft_row_tetra(char *tetra);

int		main(void)
{
	char   *striT0 = ".###\n..#.\n....\n....\n\n";
	char   *striT1 = "...#\n..##\n...#\n....\n\n";
	char   *striT2 = "..#.\n.###\n....\n....\n\n";
	char   *striT3 = "..#.\n..##\n..#.\n....\n\n";
	char   *striL0 = "..#.\n..#.\n..##\n....\n\n";
	char   *striL1 = "....\n.###\n.#..\n....\n\n";
	char   *striL2 = "..##\n...#\n...#\n....\n\n";
	char   *striL3 = "...#\n.###\n....\n....\n\n";
	char   *striLr0 = "...#\n...#\n..##\n....\n\n";
	char   *striLr1 = ".#..\n.###\n....\n....\n\n";
	char   *striLr2 = "....\n..##\n..#.\n..#.\n\n";
	char   *striLr3 = "....\n.###\n...#\n....\n\n";
	char   *striI0 = "...#\n...#\n...#\n...#\n\n";
	char   *striI1 = "....\n####\n....\n....\n\n";
	char   *striS0 = "....\n..##\n.##.\n....\n\n";
	char	*striS1 = "..#.\n..##\n...#\n....\n\n";
	char	*striSr0 = "....\n.##.\n..##\n....\n\n";
	char    *striSr1 = "...#\n..##\n...#\n....\n\n";
	char    *striO0 = "..##\n..##\n....\n....\n\n";
	int		**tab;
	char	**square;
	int		n;

	n = 4;
	tab = ft_coor_tetra(ft_row_tetra(striT0));
	square = ft_new_square(n);
	printf("%d", ft_check_posi(square, tab, 0, 0, n));
}
