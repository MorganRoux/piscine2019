/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 10:36:19 by mroux             #+#    #+#             */
/*   Updated: 2019/08/01 21:49:09 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		printnbr(int n)
{
	if (n / 10 > 9)
	{
		ft_putchar(printnbr(n / 10) + '0');
		return (n % 10);
	}
	else
	{
		ft_putchar(n / 10 + '0');
		return (n % 10);
	}
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
	if (nb < 10)
		ft_putchar(nb + '0');
	else
		ft_putchar(printnbr(nb) + '0');
}
