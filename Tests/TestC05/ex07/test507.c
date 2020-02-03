/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test507.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:31:30 by mroux             #+#    #+#             */
/*   Updated: 2019/08/08 19:09:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_find_next_prime(int nb);

int 	main(void)
{
	int i = 0;
	int nb;

	nb = 2147483400;
	printf("11 : %d\n", ft_find_next_prime(11));
	printf("2 : %d\n", ft_find_next_prime(-2147483648));
	printf("3 : %d\n", ft_find_next_prime(3));
	printf("2 : %d\n", ft_find_next_prime(2));
	printf("5 : %d\n", ft_find_next_prime(4));
	while (i < 10)
	{ 	
		nb = ft_find_next_prime(nb + 1);
		printf("%d ", nb);
		i++;
	}
	printf("\n2147483423 2147483477 2147483489 "
			"2147483497 2147483543 2147483549 "
			"2147483563 2147483579 2147483587 "
			"2147483629\n");
	return (0);
}
