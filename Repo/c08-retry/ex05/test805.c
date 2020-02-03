/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test805.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 08:59:13 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 13:13:48 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>

void	ft_show_tab(struct s_stock_str *par);
struct s_stock_str	*ft_strs_to_tab(int size, char **str);

int main(void)
{
	char		*strs[10];
    char		*str1 = "1234567890123456789012";
	char 		*str2 = "test2";
	char		*str3 = "test3";
	char		*str4 = "";
	char		*str5 = "t";
	char		*change = "change";
	t_stock_str	*stock;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
	strs[4] = str5;
	stock = ft_strs_to_tab(5, strs);

	stock[2].copy = change;
	ft_show_tab(stock);

	return (0);
}
