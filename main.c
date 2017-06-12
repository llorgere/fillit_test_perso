/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/12 17:04:34 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		main(int ac, char **av)
{
	t_type3	s;

	s.sq_s = 2;
	if (ac != 2)
	{
		ft_putstr("usage : <exe> <map>\n");
		return (0);
	}
	if (ft_tetra_nb_char(av[1]) == 0 ||
			!(ft_tetra_valid(av[1], ft_tetra_nb_char(av[1]))))
	{
		ft_putstr("error\n");
		return (0);
	}
	s.nb_tetra = ((ft_tetra_nb_char(av[1]) - 20) / 21) + 1;
	s.file = (ft_tetra_valid(av[1], ft_tetra_nb_char(av[1])));
	s.coor = ft_tab_to_int(s.file, s.nb_tetra);
	while (s.sq_s * s.sq_s < 4 * s.nb_tetra)
		s.sq_s++;
	s.square = ft_new_square(s.sq_s);
	s = ft_square_enix(s);
	ft_print_solved(s);
	return (0);
}
