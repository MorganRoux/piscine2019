/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test501.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:05:25 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 09:28:44 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <math.h>

int		ft_recursive_factorial(int nb);

int main(void)
{
	int i;
	int a;

	i = 1;

	printf("-2 : %d\n", ft_recursive_factorial(-2));
	printf("-1 : %d\n", ft_recursive_factorial(-1));
	printf(“0! = 1 : %d\n", ft_recursive_factorial(0));

	while (i< 10)
	{
		a = ft_recursive_factorial(i);
		if( tgamma(i+1) != a)
			printf("err %d - %d\n", i, a);
		else
			printf("%d : ok\n", i);
		i++;
	}
	a = ft_recursive_factorial(12);
	printf("12! = 479001600 : %d \n", a);	

	
	a = ft_recursive_factorial(13);
	printf("13! = 6227020800 : %d > 2147483647 ??\n", a);	
	printf("out : %d\n", ft_recursive_factorial(1263000));
	return (0);

}
