/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:16:01 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 09:57:49 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H
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
void	ft_tail_file(int fd, int n);
void	print_from_stdin();

#endif
