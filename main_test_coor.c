/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_coor.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:38:17 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/23 19:14:44 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "txt.h"

int		main(void)
{
	int		i;
	int		**tab;
	char	*str = "...#\n..##\n...#\n....\n\n";

	printf("%s\n", str);
	i = 0;
	printf("Debug: %d\n", i);
	tab = ft_coor_tetra(ft_row_tetra(str));
	printf("debug 2");
	while (i < 4)
	{
		printf("tetra %d est [%d ;", (i + 1), tab[i][0]);
		printf(" %d]\n", tab[i][1]);
		i++;
	}
	return(0);
}
