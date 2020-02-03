/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test505.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:31:41 by mroux             #+#    #+#             */
/*   Updated: 2019/08/07 14:28:11 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_sqrt(int nb);

int		main(void)
{
	printf("sqrt(4) = 2 - %d\n", ft_sqrt(4));
	printf("sqrt(16) = 4 - %d\n", ft_sqrt(16));
	printf("sqrt(64) = 8 - %d\n", ft_sqrt(64));
	printf("sqrt(5) = 0 - %d\n", ft_sqrt(5));
	printf("sqrt(63) = 0 - %d\n", ft_sqrt(5));
	printf("sqrt(0) = 0 - %d\n", ft_sqrt(0));
	printf("sqrt(1) = 1 - %d\n", ft_sqrt(1));
	printf("sqrt(-10) = 0 - %d\n", ft_sqrt(0));
	printf("sqrt(2147483647) = 0 - %d\n", ft_sqrt(2147483646));
	printf("sqrt(2147395600) = 46340 - %d\n", ft_sqrt(2147395600));
	return (0);
}
