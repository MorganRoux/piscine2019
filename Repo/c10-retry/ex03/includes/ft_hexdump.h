/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 11:15:43 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 13:58:50 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H
# include "ft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/errno.h>
# include <stdlib.h>
# include <string.h>
# include <libgen.h>

void	ft_puterr(char *str);
void	ft_putfileerr();
void	ft_hexdump(int fd);
void	print_from_stdin();

#endif
