/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1002.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:16:22 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 11:59:08 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

char	*g_filename;
char	*g_appname;

void	print_header(char *g_filename)
{
	ft_putstr("==> ");
	ft_putstr(g_filename);
	ft_putstr(" <==\n");
}

int		init(void)
{
	int fd;

	if ((fd = open(g_filename, O_RDONLY)) == -1)
		ft_putfileerr();
	return (fd);
}

void	loop(int argc, char *argv[], int n)
{
	int i;
	int fd;

	i = 3;
	if (argc == 4)
	{
		g_filename = argv[3];
		if ((fd = init()) != -1)
			ft_tail_file(fd, n);
		return ;
	}
	while (i < argc)
	{
		g_filename = argv[i];
		if ((fd = init()) != -1)
		{
			if (i != 3)
				ft_putchar('\n');
			print_header(argv[i]);
			ft_tail_file(fd, n);
		}
		i++;
	}
}

int		check_n(char *str)
{
	int n;

	n = ft_atoi(str);
	if (n == -2147483648)
		n = 2147483647;
	else if (n < 0)
		n = -n;
	return (n);
}

int		main(int argc, char *argv[])
{
	int n;

	if (argc <= 2)
		return (0);
	g_appname = argv[0];
	g_filename = 0;
	n = check_n(argv[2]);
	if (argc == 3)
		ft_tail_file(0, n);
	else
		loop(argc, argv, n);
	return (0);
}
