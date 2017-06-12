/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_tetra.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/15 12:10:57 by llorgere          #+#    #+#             */
/*   Updated: 2017/06/09 17:33:43 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libfil.h"
#define BUFF_SIZE 1

int		ft_tetra_nb_char(char *file)
{
	int		fd;
	char	buff[546];
	int		ret;
	int		n;

	n = 20;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	ret = 0;
	while (read(fd, buff, BUFF_SIZE) != 0)
		ret++;
	while (n < ret && n < 545)
		n = n + 21;
	if (n == ret)
	{
		return (n);
	}
	else
	{
		return (0);
	}
	close(fd);
}
