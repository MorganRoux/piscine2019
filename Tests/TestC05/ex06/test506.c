/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test506.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:17:04 by mroux             #+#    #+#             */
/*   Updated: 2019/08/08 18:50:08 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_is_prime(int nb);

int		main(void)
{
	printf("-2 : 0 - %d\n",ft_is_prime(-2)); 
	printf("0 : 0 - %d\n",ft_is_prime(0)); 
	printf("1 : 0 - %d\n",ft_is_prime(1)); 
	printf("2 : 1 - %d\n",ft_is_prime(2)); 
	printf("3 : 1 - %d\n",ft_is_prime(3)); 
	printf("4 : 0 - %d\n",ft_is_prime(4)); 
	printf("5 : 1 - %d\n",ft_is_prime(5)); 
	printf("16 : 0 - %d\n",ft_is_prime(16)); 
	printf("19 : 1 - %d\n",ft_is_prime(19)); 
	printf("27 : 0 - %d\n",ft_is_prime(27)); 
	printf("1151 : 1 - %d\n",ft_is_prime(1151)); 
	printf("2147483639 : 0 - %d\n",ft_is_prime(2147483639)); 
	printf("2147483647 : 1 - %d\n",ft_is_prime(2147483647)); 
	
	return (0);
}
