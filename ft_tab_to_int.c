/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 16:45:40 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 19:55:27 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#include <stdio.h>

int		***ft_tab_to_int(char **tetra, int nb_tetra)
{
	int		i;
	int		***tab;

//	printf("test tab_to_int 1 \n");
	if(!(tab = (int ***)malloc(sizeof(int **) * nb_tetra)))
		return (NULL);
	i = 0;
//	printf("test tab_to_int 2 \n");
	while (i < nb_tetra)
	{
//		printf("test tab_to_int 3 du tetra %d \n", i);
//		printf("*tetra[%d] est %s",i , tetra[i]);
		tab[i] = ft_coor_tetra(ft_row_tetra(tetra[i]));
//		printf("test tab_to_int 4 du tetra %d \n", i);
		i++;
	}
	return (tab);
}
