/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test507.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:31:30 by mroux             #+#    #+#             */
/*   Updated: 2019/08/07 17:41:17 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_find_next_prime(int nb);

int 	main(void)
{
	int i = -2;
	printf("-2 : %d\n", ft_find_next_prime(-2));
	while (i < 20)
	{	
		i = ft_find_next_prime(i);
		printf("%d ", i);
		i++;
	}
	printf("\n2 3 5 7 11 13 17 19\n");
	printf("11 : %d\n", ft_find_next_prime(11));
	printf("\n2147483423 : %d\n", ft_find_next_prime(2147483423));
	printf("\n 2147483647 : %d\n", ft_find_next_prime(2147483646));
	printf("\n -2147483647 : %d\n", ft_find_next_prime(-2147483647));
		
	return (0);
}
