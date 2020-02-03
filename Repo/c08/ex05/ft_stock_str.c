/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 08:26:32 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 09:22:44 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != 0)
		len++;
	return (len);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *stock;
	int			i;

	i = 0;
	if (!(stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		if (!(stock[i].str = (char *)malloc(\
						sizeof(char) * (stock[i].size + 1))))
			return (0);
		if (!(stock[i].cpy = (char *)malloc(\
						sizeof(char) * (stock[i].size + 1))))
			return (0);
		ft_strcpy(stock[i].str, av[i]);
		ft_strcpy(stock[i].cpy, av[i]);
		i++;
	}
	stock[ac].str = 0;
	stock[ac].cpy = 0;
	return (stock);
}
