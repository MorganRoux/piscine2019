/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 15:01:42 by mroux             #+#    #+#             */
/*   Updated: 2019/08/14 15:16:46 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_doop.h"

void	add(int a, int b)
{
	ft_putnbr(a + b);
	write(1, "\n", 1);
}

void	sub(int a, int b)
{
	ft_putnbr(a - b);
	write(1, "\n", 1);
}

void	prod(int a, int b)
{
	ft_putnbr(a * b);
	write(1, "\n", 1);
}

void	div(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
	write(1, "\n", 1);
}

void	mod(int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
	write(1, "\n", 1);
}
