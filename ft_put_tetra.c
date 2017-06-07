/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 17:13:15 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 21:00:11 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libfil.h"

char	**ft_put_tetra(char	**square, int **tetra, int row, int col, int num_tetra)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		square[row + tetra[i][1]][col + tetra[i][0]] = 'A' + num_tetra;
		i++;
	}
	return (square);
}
