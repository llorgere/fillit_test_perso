/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_posi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 13:04:51 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 17:30:00 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		ft_check_posi(char **square, int **tetra, int pos, int sq_size)
{
	int		i;
	int		row;
	int		col;

	i = 0;
	row = pos / sq_size;
	col = pos % sq_size;
	while (i < 4)
	{
		if ((row + tetra[i][1]) < 0 || (col + tetra[i][0]) < 0
				|| (col + tetra[i][0]) >= sq_size ||
				(row + tetra[i][1]) >= sq_size)
			return (0);
		else if (square[row + tetra[i][1]][col + tetra[i][0]] != '.')
			return (0);
		i++;
	}
	return (1);
}
