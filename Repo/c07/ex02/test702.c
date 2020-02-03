/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test702.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:44:42 by mroux             #+#    #+#             */
/*   Updated: 2019/08/11 13:44:19 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int		ft_ultimate_range(int **range, int min, int max);

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
	int r;
	int min, max;
    int i;
	
	i = 0;
	min = -2147483648;
	max = -2147483646;
	r = ft_ultimate_range(&tab, min, max);
	printf("%d %d == %d\n", min, max - 1, max - min);
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);
	
	i = 0;
	min = 6;
	max = 7;
	r = ft_ultimate_range(&tab, min, max);
	printf("6 == 1\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);

	i = 0;
	min = 2147483645;
	max = 2147483647;
	r = ft_ultimate_range(&tab, min, max);
	printf("2147483645 2147483646 == 2\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);

	i = 0;
	min = 4;
	max = 3;
	r = ft_ultimate_range(&tab, min, max);
	printf("== 0\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);
	if (tab == 0)
		printf("ok\n");
	else
		printf("err : non null\n");

	
	i = 0;
	min = 10;
	max = 10;
	r = ft_ultimate_range(&tab, min, max);
	printf("== 0\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);
	if (tab == 0)
		printf("ok\n");
	else
		printf("err : non null\n");

/*
	i = 0;
	min = -20;
	max = 2000000000;
	r = ft_ultimate_range(&tab, min, max);
	printf("== -1\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);
	if (tab == 0)
		printf("ok\n");
	else
		printf("err : non null\n");
*/
	i = 0;
	min = -5;
	max = 4;
	r = ft_ultimate_range(&tab, min, max);
	printf("-5 -4 -3 -2 -1 0 1 2 3 == 9\n");
	while (i < max - min)
		printf("%d ",tab[i++]);
	printf("== %d\n", r);

	return (0);
}
