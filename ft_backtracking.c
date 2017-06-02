/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 16:16:37 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 18:12:08 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libfil.h"
#include "libft/libft.h"

int		ft_backtracking(char **square, int square_size, int position, int nb_tetra, int ***tetra)
{
	int		row;
	int		col;
	int		i;

	if ((position == square_size * square_size))
		return (ft_backtracking(square, square_size,  postion, nb_tetra, tetra));
	if ((position == square_size * square_size) && tetra == 0)
		return (1);
	row = position / square_size;
	col = position % square_size;
	if (square[row][col] != '.')
		return (ft_backtracking(square, square_size, position + 1, nb_tetra));
	while (i < nb_tetra)
	{
		if (ft_check_posi(square, tetra[i], row, col, nb_tetra))
		{
			ft_put_tetra();
			if (ft_backtracking(grille,, square))
		}
	}
}
