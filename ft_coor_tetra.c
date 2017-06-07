/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coor_tetra.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:26:45 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 19:55:31 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libfil.h"

char	**ft_row_tetra(char *tetra)
{
	int		col;
	int		row;
	int		i;
	int		j;
	char	**tab;

	if (!(tab = (char **)malloc(sizeof(char *) * 4)))
		return (NULL);
	row = 0;
	i = 0;
	j = 4;
//	printf("test 1 ft_row\n");
	while (i < 19)
	{
		col = 0;
//		printf("test 2 ft_row de %d\n", i);
		if (!(tab[row] = (char *)malloc(sizeof(char) * 5)))
			return (NULL);
//		printf("test 3 ft_row de %d\n", i);
		while (i < j)
		{
/*			printf("*row = %d et *col = %d\n", row, col);
			printf("test 3.5 ft_row de %d\n", i);
			printf("tetra[i] est %c\n", tetra[i]);
*/			tab[row][col] = tetra[i];
//			printf("row = %d et col = %d\n", row, col);
			col++;
			i++;
//			printf("test 4 ft_row de %d\n", i);
		}
		tab[row][col] = '\0';
		row++;
//		printf("test 5 ft_row de %d\n", i);
		i = i + 1;
		j = i + 4;
	}
	return (tab);
}

int		**ft_coor_tetra(char **tetra)
{
	int		**coor;
	int		ori[2];
	int		row;
	int		col;
	int		sq;

	sq = 0;
	row = 0;
	if (!(coor = (int **)malloc(sizeof(int *) * 4)))
		return (NULL);
	if (!(coor[sq] = (int *)malloc(sizeof(int) * 2)))
		return (NULL);
	coor[0][0] = 0;
	coor[0][1] = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			if (sq == 0 && tetra[row][col] == '#')
			{
				ori[0] = col;
				ori[1] = row;
				sq++;
			}
			else if (tetra[row][col] == '#')
			{
				if (!(coor[sq] = (int *)malloc(sizeof(int) * 2)))
					return (NULL);
				coor[sq][0] = col - ori[0];
				coor[sq][1] = row - ori[1];
				sq++;
			}
			col++;
		}
		row++;
	}
	return (coor);
}
