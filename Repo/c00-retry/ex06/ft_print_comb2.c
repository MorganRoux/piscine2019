/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:14:53 by mroux             #+#    #+#             */
/*   Updated: 2019/07/31 10:31:07 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers_comb2(int i, int j)
{
	int a;

	a = i / 10;
	ft_putchar(a + 48);
	a = i % 10;
	ft_putchar(a + 48);
	ft_putchar(' ');
	a = j / 10;
	ft_putchar(a + 48);
	a = j % 10;
	ft_putchar(a + 48);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 100)
	{
		j = i;
		while (++j < 100)
		{
			ft_print_numbers_comb2(i, j);
			if (i == 98 && j == 99)
			{
				break ;
			}
			ft_putchar(',');
			ft_putchar(' ');
		}
		i++;
	}
}
