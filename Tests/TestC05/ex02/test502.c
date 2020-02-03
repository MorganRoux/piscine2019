/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test502.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:37:42 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 09:59:30 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
int		ft_iterative_power(int nb, int power);

int main(void)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	printf("-2 : %d\n", ft_iterative_power(-2, 1));
	printf("36 : %d\n", ft_iterative_power(-6, 2));
	printf("0 : %d\n", ft_iterative_power(0, 2));
	printf("0 : %d\n", ft_iterative_power(0, -2));
	printf("0 : %d\n", ft_iterative_power(2, -3));
	getchar();
	printf("%f %d\n", pow(2,4), ft_iterative_power(2,4)); 
	while (i< 11)
	{
		j = 0;
		while(j<11)
		{
			a = ft_iterative_power(i,j);
			if( pow(i, j) != a)
			{
				printf("err %d %d - %d\n", i, j, a);
				break;
			}
			else
				printf("%d %d : ok\n", i, j);
			j++;
		}
		i++;

	}
/*	a = ft_iterative_power(12);
	printf("12! = 479001600 : %d \n", a);	

	
	a = ft_iterative_factorial(13);
	printf("13! = 6227020800 : %d > 2147483647 ??\n", a);	
	printf("out : %d\n", ft_iterative_factorial(1263000));
*/	return (0);

}
