/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solved.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 15:41:02 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 17:33:01 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

void	ft_print_solved(t_type3 s)
{
	s.nb_tetra = 0;
	while (s.nb_tetra < s.sq_s)
	{
		ft_putstr(s.square[s.nb_tetra]);
		s.nb_tetra++;
	}
}
