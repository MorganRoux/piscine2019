/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 08:38:24 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 09:57:46 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

extern	char	*g_filename;
extern	char	*g_appname;

void	ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		write(2, &str[i++], 1);
	return ;
}

void	ft_putfileerr(void)
{
	ft_puterr(basename(g_appname));
	ft_puterr(": ");
	ft_puterr(g_filename);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
}

void	copy_buf(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	ft_tail_file(int fd, int n)
{
	char	*buf;
	int		r;
	int		count;

	count = 0;
	if ((n == 0) || !(buf = (char *)malloc(sizeof(char) * 2 * n)))
		return ;
	while ((r = read(fd, buf + n, n)) == n)
	{
		copy_buf(buf, buf + n, r);
		count += r;
	}
	if (r == -1)
	{
		ft_putfileerr();
		close(fd);
		return ;
	}
	if (count > 0)
		write(1, buf + r, n);
	else
		write(1, buf + n, r);
	if (close(fd) == -1)
		ft_putfileerr();
}
