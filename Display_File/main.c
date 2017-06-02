/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:33:09 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/11 14:51:51 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prot.h"

int		main(int ac, char **av)
{
	if (ac == 1)
		ft_putstr("File name missing.\n");
	else if (ac == 2)
		ft_display_file(av[1]);
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
