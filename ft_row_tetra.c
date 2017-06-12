/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_row_tetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:06:37 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 17:33:20 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

char	**ft_row_tetra(char *tetra)
{
	t_type2	ro;

	if (!(ro.tab = (char **)malloc(sizeof(char *) * 4)))
		return (NULL);
	ro.row = 0;
	ro.i = 0;
	ro.j = 4;
	while (ro.i < 19)
	{
		ro.col = 0;
		if (!(ro.tab[ro.row] = (char *)malloc(sizeof(char) * 5)))
			return (NULL);
		while (ro.i < ro.j)
		{
			ro.tab[ro.row][ro.col] = tetra[ro.i];
			ro.col++;
			ro.i++;
		}
		ro.tab[ro.row][ro.col] = '\0';
		ro.row++;
		ro.i = ro.i + 1;
		ro.j = ro.i + 4;
	}
	return (ro.tab);
}
