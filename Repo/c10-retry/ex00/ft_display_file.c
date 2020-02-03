/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:17:53 by mroux             #+#    #+#             */
/*   Updated: 2019/08/12 17:15:54 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		write(2, &str[i++], 1);
	return ;
}

void	ft_display(char *filename)
{
	int		fd;
	char	buf[100];
	int		r;

	r = 0;
	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		ft_puterr("Cannot read file.\n");
		return ;
	}
	while ((r = read(fd, buf, sizeof(buf))) != 0)
	{
		if (r == -1)
		{
			ft_puterr("Error reading\n");
			close(fd);
			return ;
		}
		write(1, buf, r);
	}
	if (close(fd) == -1)
		ft_puterr("Error closing file");
}
