/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:46:48 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 12:15:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/errno.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>


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

void	print_addr(long l)
{
	long	i;
	int		tmp;
	char	base[16] = "0123456789abcdef";
	i = 0x10000000;
	while (i > 0)
	{
		tmp = l / i;
		ft_putchar(base[tmp]);
		l = l % i;
		i = i / 0x10;
	}
}

void	print_hexa(int count, unsigned char *buf)
{
	int i;
	char	base[16] = "0123456789abcdef";

	ft_putchar(' ');
	ft_putchar(' ');
	i = 0;
	while (i < 16)
	{
		if (i > count - 1)
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		else
		{
			ft_putchar(base[buf[i] / 16]);
			ft_putchar(base[buf[i] % 16]);
		}
		ft_putchar(' ');
		if (++i == 8)
			ft_putchar(' ');
	}
	ft_putchar(' ');
}

void	print_char(int count, unsigned char *buf)
{
	int i;
	
	i = 0;
	ft_putchar('|');
	while (i < 16)
	{
		if (i > count - 1)
			break ;
		if (buf[i] < 32 || buf[i] > 126)
			ft_putchar('.');
		else
			ft_putchar(buf[i]);
		i++;
	}
	ft_putchar('|');

}

void	ft_hexdump(char *filename)
{
	long			count;
	unsigned char	buf[16];
	int				fd;
	int				r;
	
	count = 0;
	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_putfileerr(filename);
		return ;
	}
	while ((r = read(fd, buf, 16)) > 0)
	{
		print_addr(count);
		print_hexa(r, buf);
		print_char(r, buf);
		ft_putchar('\n');
		count += r;
	}
	if (r == -1)
	{
		ft_putfileerr(basename(filename));
		close(fd);
		return ;
	}
	print_addr(count);
	write(1,"\n",1);
	if (close(fd) == -1)
		ft_putfileerr(basename(filename));
	return ;
}
