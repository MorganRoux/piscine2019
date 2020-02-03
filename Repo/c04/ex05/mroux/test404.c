/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test404.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:59:07 by mroux             #+#    #+#             */
/*   Updated: 2019/08/05 10:22:29 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	 ft_putnbr_base(0, "0123456789");
	 printf("\n");
//	 ft_putnbr(0);
	ft_putnbr_base(-2147483648,"0123456789");
	 printf("\n");
	ft_putnbr_base(687230, "0123456789");
	 printf("\n");
    ft_putnbr_base(-1,"0123456789");
	printf("\n");
    ft_putnbr_base(-0xFF10A,"0123456789ABCDEF");
	printf("\n");
    ft_putnbr_base(0xFFffffff,"0123456789ABCDEF");
	printf("\n");
    ft_putnbr_base(-2147483648,"0123456789ABCDEF");


	return (0);
}
