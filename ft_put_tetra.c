/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_tetra.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 17:13:15 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 17:40:50 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_put_tetra(char	**square, int **tetra, int col, int row, int num_tetra)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		square[col + tetra[i][0]][row + tetra[i][1]] = 'A' + num_tetra;
		i++;
	}
	return (square);
}
