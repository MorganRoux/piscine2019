/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test404.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 08:59:07 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 18:55:13 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	 ft_putnbr_base(0, "0123456789");
	 printf("\n");
//	 ft_putnbr(0);
	ft_putnbr_base(-2147483648,"012+3456789");  //0
	 printf("\n");
	ft_putnbr_base(-2147483648,"0123456789");
	 printf("\n");
	ft_putnbr_base(687230, "0123456789");
	 printf("\n");
    ft_putnbr_base(-1,"0123456789");
	printf("\n");
    ft_putnbr_base(-0xFF10A,"0123456789ABCDEF");
	printf("\n");
    ft_putnbr_base(0xFFffffff,"0123456789ABCDEF");  //-1
	printf("\n");
    ft_putnbr_base(-2147483648,"0123456789ABCDEF"); //-80000000


	return (0);
}
