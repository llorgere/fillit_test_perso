/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/07 16:00:52 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/12 17:44:37 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#include <stdio.h>

static char	**ft_back_valid(t_type *test, char **sq, int ***tet, int sq_s)
{
	sq = ft_put_tetra(sq, tet[test->num_te], *test, sq_s);
	(test->pos_tet[test->num_te]) = (test->pos);
	(test->pos) = 0;
	(test->num_te)++;
	return (sq);
}

static char	**ft_back_invalid(t_type *test, char **sq, int sq_s, int ***tet)
{
	test->num_te--;
	test->pos = test->pos_tet[test->num_te];
	sq = ft_rm_tetra(sq, tet[test->num_te], test->pos, sq_s);
	test->pos++;
	return (sq);
}

int			ft_backtracking(char **sq, int sq_s, int ***tet, int nb_tet)
{
	t_type	test;

	test.pos = 0;
	test.num_te = 0;
	if (!(test.pos_tet = (int*)malloc(sizeof(int) * nb_tet)))
		return (0);
	while (test.num_te < nb_tet)
	{
		if (ft_check_posi(sq, tet[test.num_te], test.pos, sq_s) == 1)
		{
			sq = ft_back_valid(&(test), sq, tet, sq_s);
		}
		else if (ft_check_posi(sq, tet[test.num_te], test.pos, sq_s) == 0 &&
				test.pos != (sq_s * sq_s))
			test.pos++;
		else if (ft_check_posi(sq, tet[test.num_te], test.pos, sq_s) == 0 &&
				test.pos == (sq_s * sq_s))
		{
			if (test.num_te == 0)
				return (-1);
			sq = ft_back_invalid(&(test), sq, sq_s, tet);
		}
	}
	return (1);
}
