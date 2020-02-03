/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test704.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 12:39:38 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 13:00:47 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

int		main(void)
{
	char		*strs[10];
    char		*str1 = "test1";
	char 		*str2 = "test2";
	char		*str3 = "test3";
	char		*str4 = "";
	char		*str5 = "t";
	t_stock_str	*stock;
	int i;
	int size;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;


	printf("===3===\n");
	i = 0;
	size = 3;
	stock = ft_strs_to_tab(size, strs);
	while(stock->str != 0)
	{	
		printf("%s - %d - %s\n", stock->str, stock->size, stock->copy);
		stock++;
	}

	printf("===5===\n");
	i = 0;
	size = 5;
	stock = ft_strs_to_tab(size, strs);
	while(stock->str != 0)
	{
		printf("%s - %d - %s\n", stock->str, stock->size, stock->copy);
		stock++;
	}
	
	printf("===1===\n");
	i = 0;
	size = 1;
	stock = ft_strs_to_tab(size, strs);
	while(stock->str != 0)
	{	
		printf("%s - %d - %s\n", stock->str, stock->size, stock->copy);
		stock++;
	}

	printf("===0===\n");
	i = 0;
	size = 0;
	stock = ft_strs_to_tab(size, strs);
	while(stock->str != 0)
	{	
		printf("%s - %d - %s\n", stock->str, stock->size, stock->copy);
		stock++;
	}

	return (0);
}
