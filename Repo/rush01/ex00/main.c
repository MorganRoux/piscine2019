/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebourdit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:40:13 by ebourdit          #+#    #+#             */
/*   Updated: 2019/08/11 18:50:57 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_init(int *tab, int *rules, char *arg);
int		ft_rush(int pos, int *tab, int *rules);

void	ft_go(int *tab, int *rules)
{
	int		i;
	char	c;

	i = 0;
	if (ft_rush(0, tab, rules) == 0)
		write(1, "Error\n", 6);
	else
	{
		while (i < 16)
		{
			c = tab[i] + 48;
			write(1, &c, 1);
			if (i % 4 == 3)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			i++;
		}
	}
}

int		main(int argc, char *argv[])
{
	int		tab[16];
	int		rules[16 * 4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (ft_init(tab, rules, argv[1]) == 0)
		write(1, "Error\n", 6);
	else
		ft_go(tab, rules);
	return (0);
}
