/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 18:48:26 by mroux             #+#    #+#             */
/*   Updated: 2019/08/18 18:41:58 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft.h"
#include <stdlib.h>

int		is_mult(char *str)
{
	int zero_nb;

	zero_nb = 0;
	if ((ft_strlen(str) <= 1) || (str[0] != '1'))
		return (0);
	while (str[1 + zero_nb] == '0')
		zero_nb++;
	if (str[1 + zero_nb] != 0)
		return (0);
	return ((zero_nb % 3 == 0 || zero_nb == 2) ? 1 : 0);
}

void	print_mult(int nb, int len, t_item_dict *dict)
{
	int value;
	int count;
	int i;
	int max_len;

	i = 0;
	while (dict[i].data != 0)
		i++;
	max_len = (i != 0) ? ft_strlen(dict[i - 1].key_str) - 1 : 0;
	value = 1;
	count = ((len - 1) / 3) * 3;
	count = (count - 3) % max_len + 3;
	if (nb != 0 || count == max_len)
	{
		while (count-- > 0)
			value = value * 10;
		ft_putchar(' ');
		find_print(value, dict);
	}
}

void	print_100(int nb, t_item_dict *dict)
{
	if ((nb != 0) && (nb != 100) && (find_print(nb, dict)))
		return ;
	if (nb > 99)
	{
		find_print((nb / 100), dict);
		ft_putchar(' ');
		find_print(100, dict);
		if (nb % 100 != 0)
			ft_putchar(' ');
	}
	if ((nb = nb % 100) != 0)
	{
		if (find_print(nb, dict) == 0)
		{
			find_print((nb / 10) * 10, dict);
			ft_putchar(' ');
			find_print(nb % 10, dict);
		}
	}
}

int		extract_100(char *str, int len)
{
	char	*str100;
	int		i;

	len = (len - 1) % 3 + 1;
	i = -1;
	if (!(str100 = (char *)malloc(sizeof(char) * (len + 1))))
		return (-1);
	while (++i < len)
		str100[i] = str[i];
	str100[i] = 0;
	return (ft_atoi(str100));
}

int		print_nbr(char *str, t_item_dict *dict)
{
	int len;
	int nb;

	if (find_print_str(str, dict))
		return (1);
	len = 0;
	len = ft_strlen(str);
	if ((nb = extract_100(str, len)) == -1)
		return (0);
	print_100(nb, dict);
	if (len > 3)
	{
		print_mult(nb, len, dict);
		str += (len - 1) % 3 + 1;
		if ((nb = extract_100(str, ft_strlen(str))) == -1)
			return (0);
		if (nb != 0)
			ft_putchar(' ');
		print_nbr(str, dict);
	}
	return (1);
}
