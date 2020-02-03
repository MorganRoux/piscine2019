/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 09:00:52 by mroux             #+#    #+#             */
/*   Updated: 2019/08/12 09:38:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

int		printnbr(int n)
{
	if (n / 10 > 0)
	{
		ft_putchar(printnbr(n / 10) + '0');
		return (n % 10);
	}
	else
		return (n % 10);
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

void	ft_show_tab(struct s_stock_str *par)
{
	if (par == 0)
		return ;
	while (par->str != 0)
	{
		ft_putstr(par->str);
		ft_putchar('\n');
		ft_putnbr(par->size);
		ft_putchar('\n');
		ft_putstr(par->cpy);
		ft_putchar('\n');
		par++;
	}
}
