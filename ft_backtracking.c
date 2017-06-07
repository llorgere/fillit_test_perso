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

void	ft_backtracking(char **file, int nb_tetra)
{
	int		size_square;
	int		**coor;
	char 	**square;
	int		row;
	int		col;
	int		tetra;

	size_square = 2;
	while (size_square < 1000)
	{
		square = ft_new_square(size_square);
		row = 0
		while (col < size_square)
		{
			col = 0;
			while (row < size_square)
			{
				tetra = 0;
				while (tetra < nb_tetra)
				{
					coor = ft_coor_tetra(ft_row_tetra(file[tetra]));
					if (ft_check_posi(square, coor, row, col, size_square) == 1)
					{
					}
					tetra++;
				}
				row++;
			}
			col++;
		}
		size_square++;
	}
}
