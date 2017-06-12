/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 17:13:15 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 17:33:06 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

char	**ft_put_tetra(char **sq, int **tet, t_type test, int sq_s)
{
	int		i;
	int		row;
	int		col;

	row = test.pos / sq_s;
	col = test.pos % sq_s;
	i = 0;
	while (i < 4)
	{
		sq[row + tet[i][1]][col + tet[i][0]] = 'A' + test.num_te;
		i++;
	}
	return (sq);
}
