/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 12:13:33 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 12:22:01 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		printnbr(int n)
{
	if (n / 10 > 0)
	{
		ft_putchar(printnbr(n / 10) + '0');
		return (n % 10);
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
		{
			nb = -nb;
		}
	}
	ft_putchar(printnbr(nb) + '0');
	ft_putchar('\n');
}


int		main(void)
{
	int tab[10] = {1,2,3,4,5,6,7,8,9,0};
	ft_foreach(tab, 10, &ft_putnbr);
	return (0);
}
