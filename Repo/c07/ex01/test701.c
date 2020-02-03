/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test701.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:21:28 by mroux             #+#    #+#             */
/*   Updated: 2019/08/11 13:16:38 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int		*ft_range(int min, int max);

void green() {
	  printf("\033[1;32m");
}
void red() {
	  printf("\033[1;31m");
}
void yellow() {
	  printf("\033[1;33m");
}
void reset () {
	  printf("\033[0m");
}

int		main(void)
{
	int* tab; 
	long min, max;
    long i;

	i = 0;
	min = -2147483648;
	max = -2147483646;
	tab = ft_range(min, max);
	printf("-2147483648 -2147483647\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("\n");
	
	i = 0;
	min = 2147483645;
	max = 2147483647;
	tab = ft_range(min, max);
	printf("2147483645 2147483646\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("\n");	
	
	i = 0;
	min = -5;
	max = 4;
	tab = ft_range(min, max);
	printf("-5 -4 -3 -2 -1 0 1 2 3\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("\n");
	
	i = 0;
	min = 10;
	max = 4;
	tab = ft_range(min, max);
	printf("null\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("\n");
	if (tab == 0)
		printf("ok\n");
	else
		printf("error\n");
	
	getchar();	
	i = 0;
	min = -100000;
	max = 100000;
	tab = ft_range(min, max);
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("\n");
	if (tab != 0)
		printf("ok\n");
	else
		printf("error\n");
	
	getchar();	
	i = 0;
	min = -10;
	max = 2147483647;
	tab = ft_range(min, max);
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("\n");
	if (tab != 0)
		printf("ok\n");
	else
		printf("error\n");

	return (0);
}
