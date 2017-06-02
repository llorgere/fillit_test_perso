/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prot.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llorgere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 14:22:52 by llorgere          #+#    #+#             */
/*   Updated: 2017/04/11 14:37:34 by llorgere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROT_H
# define FT_PROT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *c);
void	ft_display_file(char *file);

#endif
