/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1003.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:46:57 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 14:05:53 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

char	*g_filename;
char	*g_appname;

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
	ft_puterr(g_filename);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
}

void	check_args(int argc, char *argv[])
{
	int i;
	int fd;

	(void)argc;
	i = 3;
	if (ft_strcmp(argv[1], "-C") != 0)
		return ;
	g_filename = argv[2];
	if ((fd = open(g_filename, O_RDONLY)) == -1)
	{
		ft_putfileerr();
		return ;
	}
	ft_hexdump(fd);
}

int		main(int argc, char *argv[])
{
	g_appname = argv[0];
	if (argc == 2 && (ft_strcmp(argv[1], "-C") == 0))
		ft_hexdump(0);
	else if (argc >= 3)
		check_args(argc, argv);
	return (0);
}
