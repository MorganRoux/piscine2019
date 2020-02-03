/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:59:22 by mroux             #+#    #+#             */
/*   Updated: 2019/08/05 20:42:13 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int				find_double(char *str, char to_find)
{
	while (*str != 0)
	{
		if (*str == to_find)
			return (1);
		str++;
	}
	return (0);
}

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

int				printnbr(unsigned int n, unsigned int nbase, char *base)
{
	if (n / nbase > 0)
	{
		ft_putchar(base[printnbr(n / nbase, nbase, base)]);
		return (n % nbase);
	}
	else
		return (n % nbase);
}

unsigned int	test_base(char *base)
{
	int i;

	i = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
				|| base[i] == '\f' || base[i] == '\n'
				|| base[i] == '\t' || base[i] == '\v')
			return (0);
		if (find_double(&base[i + 1], base[i]))
			return (0);
		i++;
	}
	return (i);
}

void			ft_putnbr_base(int nbr, char *base)
{
	unsigned int nbase;
	unsigned int n;

	nbase = test_base(base);
	if (nbase < 2)
		return ;
	if (nbr == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		n = -nbr;
	}
	else
		n = nbr;
	if (n < nbase)
		ft_putchar(base[n]);
	else
		ft_putchar(base[printnbr(n, nbase, base)]);
}
