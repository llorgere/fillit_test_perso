/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:13:51 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/12 17:52:47 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

static int		ft_tetra_check(char *tetra, t_type5 *s)
{
	int		la;

	s->count_diese++;
	la = 0;
	if (tetra[s->i - 1] == '#')
		la++;
	if (tetra[s->i + 1] == '#')
		la++;
	if (tetra[s->i - 5] == '#')
		la++;
	if (tetra[s->i + 5] == '#')
		la++;
	if (la == 0)
		return (9);
	s->l = s->l + la;
	return (s->l);
}

int				ft_check_tetra(char *tetra)
{
	t_type5 s;

	s.i = 0;
	s.j = s.i + 4;
	s.l = 0;
	s.count_diese = 0;
	while (s.i <= 19)
	{
		while (s.i < s.j && (tetra[s.i] == '.' || tetra[s.i] == '#'))
		{
			if (tetra[s.i] == '#')
			{
				s.l = ft_tetra_check(tetra, &(s));
			}
			s.i++;
		}
		if (tetra[s.i] != '\n' && s.i != s.j)
			return (0);
		s.i++;
		s.j = s.i + 4;
	}
	if ((s.l == 6 || s.l == 8) && s.count_diese == 4)
		return (1);
	else
		return (0);
}
