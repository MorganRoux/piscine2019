/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 09:20:48 by mroux             #+#    #+#             */
/*   Updated: 2019/07/31 09:44:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers_comb(int i, int j, int k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 10)
	{
		j = i;
		while (++j < 10)
		{
			k = j;
			while (++k < 10)
			{
				ft_print_numbers_comb(i, j, k);
				if (i == 7 && j == 8 && k == 9)
				{
					break ;
				}
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i++;
	}
}
