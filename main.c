/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 17:05:25 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac != 2 || ft_tetra_nb_char(av[1]) == 0)
		ft_putstr("error\n");
	else if (!(ft_tetra_valid(av[1], ft_tetra_nb_char(av[1]))))
		ft_putstr("error\n");
	return (0);
}
