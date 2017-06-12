/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square_enix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 17:17:11 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/12 17:03:11 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

t_type3	ft_square_enix(t_type3 s)
{
	while (ft_backtracking(s.square, s.sq_s, s.coor, s.nb_tetra) != 1)
	{
		s.sq_s++;
		s.square = ft_new_square(s.sq_s);
	}
	return (s);
}
