/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:14:22 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 21:37:14 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/errno.h>
#include <string.h>
#include <libgen.h>

void	ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		write(2, &str[i++], 1);
	return ;
}

void	ft_putfileerr(char *filename, char *appname)
{
	ft_puterr(basename(appname));
	ft_puterr(": ");
	ft_puterr(filename);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
}

void	print_from_stdin(void)
{
	char	buf[100];
	int		r;

	r = 0;
	while ((r = read(0, buf, sizeof(buf))) > 0)
		write(1, buf, r);
	if (r == -1)
		ft_puterr(strerror(errno));
}

void	ft_display_file(char *filename, char *appname)
{
	int		fd;
	char	buf[100];
	int		r;

	r = 0;
	if (filename == 0)
		fd = 0;
	else if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_putfileerr(filename, appname);
		return ;
	}
	while ((r = read(fd, buf, sizeof(buf))) != 0)
	{
		if (r == -1)
		{
			ft_putfileerr((filename == 0) ? "" : filename, appname);
			close(fd);
			return ;
		}
		write(1, buf, r);
	}
	if (close(fd) == -1)
		ft_putfileerr((filename == 0) ? "" : filename, appname);
}
