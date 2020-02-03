/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 17:12:15 by mroux             #+#    #+#             */
/*   Updated: 2019/08/02 09:38:07 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_numbers(int *i, int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		ft_putchar(i[c] + '0');
		c++;
	}
}

int		checkend(int *i, int n)
{
	int b;
	int c;

	b = 1;
	c = 0;
	while (c < n)
	{
		if (i[c] != 10 - n + c)
		{
			b = 0;
			break ;
		}
		c++;
	}
	return (b);
}

void	print_combn(int n, int k)
{
	static int i[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	if (i[k] == 11)
		i[k] = i[k - 1] + 1;
	while (i[k] < 10)
	{
		if (k < n - 1)
			print_combn(n, k + 1);
		else
		{
			print_numbers(i, n);
			if (!checkend(i, n))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		i[k]++;
	}
	if (k > 0)
		i[k] = i[k - 1] + 2;
}

void	ft_print_combn(int n)
{
	print_combn(n, 0);
}
