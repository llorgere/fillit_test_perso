/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/02 20:49:15 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	**square;
	char	**file;
	int		***coor;
	int		sq_s;
	int		nb_tetra;

	sq_s = 2;
//	printf("test 0\n");
	if (ac != 2 || ft_tetra_nb_char(av[1]) == 0)
		ft_putstr("error\n");
	else if (!(ft_tetra_valid(av[1], ft_tetra_nb_char(av[1]))))
	{
		ft_putstr("error\n");
		return (0);
	}
//	printf("test 1\n");
	nb_tetra = ((ft_tetra_nb_char(av[1]) - 20) / 21) + 1;
//	printf("le nb de tetra est [%d]\n", nb_tetra);
//	printf("test 2\n");
	file = (ft_tetra_valid(av[1], ft_tetra_nb_char(av[1])));
//	printf("file[0] est %s\n", file[0]);
	coor = ft_tab_to_int(file, nb_tetra);
//	printf("test 4\n");
	square = ft_new_square(sq_s);
//	printf("test 5\n");
	while (ft_backtracking_ite(square, sq_s, coor, nb_tetra) != 1)
	{
		sq_s++;
		square = ft_new_square(sq_s);
	}
//	ft_backtracking_ite(square, sq_s, coor, nb_tetra);
//	printf("test 6\n");
	nb_tetra = 0;
	while (nb_tetra < sq_s)
	{
		printf("%s", square[nb_tetra]);
		nb_tetra++;
	}
	return (0);
}
