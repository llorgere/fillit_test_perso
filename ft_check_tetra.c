/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 16:13:51 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 16:01:22 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"

int		ft_tetra_check(char *tetra, int i, int l)
{
	int		la;

	la = 0;
	if (tetra[i - 1] == '#')
		la++;
	if (tetra[i + 1] == '#')
		la++;
	if (tetra[i - 5] == '#')
		la++;
	if (tetra[i + 5] == '#')
		la++;
	if (la == 0)
		return (0);
	l = l + la;
	return (l);
}

int		ft_check_tetra(char *tetra)
{
	int		i;
	int		l;
	int		j;

	i = 0;
	j = i + 4;
	l = 0;
	while (i <= 19)
	{
		while (i < j && (tetra[i] == '.' || tetra[i] == '#'))
		{
			if (tetra[i] == '#')
				l = ft_tetra_check(tetra, i, l);
			i++;
		}
		if (tetra[i] != '\n' && i != j)
			return (0);
		i++;
		j = i + 4;
	}
	if (l == 6 || l == 8)
		return (1);
	else
		return (0);
}
