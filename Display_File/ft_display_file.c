/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 12:17:45 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/11 14:35:51 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prot.h"

void	ft_display_file(char *file)
{
	int		fd;
	char	buff[65000];
	int		size;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return ;
	size = read(fd, buff, 64999);
	if (size == -1)
		return ;
	buff[size] = '\0';
	ft_putstr(buff);
	close(fd);
}
