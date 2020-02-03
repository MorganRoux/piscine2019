/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1003.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 10:46:57 by mroux             #+#    #+#             */
/*   Updated: 2019/08/15 12:15:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

void	ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		write(2, &str[i++], 1);
	return ;
}

void	ft_putfileerr(char *filename)
{
	ft_puterr("hexdump: ");
	ft_puterr(filename);
	ft_puterr(": ");
	ft_puterr(strerror(errno));
	ft_puterr("\n");
}

void	check_args(int argc, char *argv[])
{
	int i;

	(void)argc;
	i = 3;
	if (ft_strcmp(argv[1], "-C") != 0)
		return ;
	ft_hexdump(argv[2]);
}

int		main(int argc, char *argv[])
{
	if (argc == 1)
		print_from_stdin();
	else if (argc >= 3)
		check_args(argc, argv);
	return (0);
}
