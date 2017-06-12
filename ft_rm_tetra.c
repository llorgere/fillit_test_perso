/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rm_tetra.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 18:33:01 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 18:33:03 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

char	**ft_rm_tetra(char **square, int **tetra, int pos, int sq_s)
{
	int		i;
	int		row;
	int		col;

	row = pos / sq_s;
	col = pos % sq_s;
	i = 0;
	while (i < 4)
	{
		square[row + tetra[i][1]][col + tetra[i][0]] = '.';
		i++;
	}
	return (square);
}
