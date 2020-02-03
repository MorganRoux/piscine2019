/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 14:37:21 by mroux             #+#    #+#             */
/*   Updated: 2019/08/18 18:41:34 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "ft.h"

int		find_print(int nb, t_item_dict *dict)
{
	int i;

	i = 0;
	while (dict[i].data != 0)
	{
		if (dict[i].value == nb)
		{
			ft_putstr(dict[i].data);
			return (1);
		}
		i++;
	}
	return (0);
}

int		find_print_str(char *str, t_item_dict *dict)
{
	int i;

	if (is_mult(str))
		return (0);
	i = 0;
	while (dict[i].data != 0)
	{
		if (ft_strcmp(dict[i].key_str, str) == 0)
		{
			ft_putstr(dict[i].data);
			return (1);
		}
		i++;
	}
	return (0);
}
