/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetra_$.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 15:08:15 by llorgere          #+#    #+#             */
/*   Updated: 2017/05/30 16:55:55 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#define BUFF_SIZE 21

char	**ft_tetra_valid(char *file, int n)
{
	int		fd;
	char	buff[BUFF_SIZE + 1];
	char	**tab;
	int		i;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * ((n - 20) / 21 + 1))))
		return (NULL);
	i = 0;
	while (read(fd, buff, BUFF_SIZE) != 0)
	{
		buff[21] = '\0';
		if (buff[20] == '\n' && i == (n - 20) / 21)
			return (NULL);
		else if (ft_check_tetra(buff) == 1)
		{
			tab[i++] = ft_strdup(buff);
			i++;
		}
		else
			return (NULL);
		ft_bzero(buff, 22);
	}
	close(fd);
	return (tab);
}
