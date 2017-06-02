/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_posi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 13:04:51 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 17:45:42 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_posi(char **square, int **tetra, int row, int col, int n)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if ((col + tetra[i][0]) < 0 || (row + tetra[i][1]) < 0
				|| (col + tetra[i][0]) >= n || (row + tetra[i][1]) >= n)
			return (0);
		else if (square[col + tetra[i][0]][row + tetra[i][1]] != '.')
			return (0);
		i++;
	}
	return (1);
}
