/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab_to_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 16:45:40 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 17:33:35 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		***ft_tab_to_int(char **tetra, int nb_tetra)
{
	int		i;
	int		***tab;

	if (!(tab = (int ***)malloc(sizeof(int **) * nb_tetra)))
		return (NULL);
	i = 0;
	while (i < nb_tetra)
	{
		tab[i] = ft_coor_tetra(ft_row_tetra(tetra[i]));
		i++;
	}
	return (tab);
}
