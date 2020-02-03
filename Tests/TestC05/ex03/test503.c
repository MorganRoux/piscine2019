/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test503.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:01:37 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 10:14:28 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
int		ft_recursive_power(int nb, int power);

int main(void)
{
	int i;
	int j;
	int a;

	i = 0;
	j = 0;
	printf("-2 : %d\n", ft_recursive_power(-2, 1));
	printf("36 : %d\n", ft_recursive_power(-6, 2));
	printf("0 : %d\n", ft_recursive_power(0, 2));
	printf("0 : %d\n", ft_recursive_power(0, -2));
	printf("0 : %d\n", ft_recursive_power(2, -3));
	getchar();
	printf("%f %d\n", pow(2,4), ft_recursive_power(2,4)); 
	while (i< 11)
	{
		j = 0;
		while(j<11)
		{
			a = ft_recursive_power(i,j);
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
	printf("out : %d\n", ft_recursive_power(2, 1012220000));

	return (0);

}
