/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:17:16 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 21:55:36 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "ft.h"

t_sqr	tab_left(t_sqr *sqr, int pos, t_map_info *info)
{
	int x;

	x = get_x(pos, info);
	if (x == 0)
		return (0);
	else
		return (sqr[pos - 1]);
}

t_sqr	tab_up(t_sqr *sqr, int pos, t_map_info *info)
{
	int y;

	y = get_y(pos, info);
	if (y == 0)
		return (0);
	else
		return (sqr[pos - info->x_max]);
}

t_sqr	tab_diag(t_sqr *sqr, int pos, t_map_info *info)
{
	int x;
	int y;

	x = get_x(pos, info);
	y = get_y(pos, info);
	if (y == 0 || x == 0)
		return (0);
	else
		return (sqr[pos - info->x_max - 1]);
}

void	print_tab(t_sqr *tab, t_map_info *info)
{
	int		x;
	int		y;

	y = 0;
	while (y < info->y_max)
	{
		x = 0;
		while (x < info->x_max)
		{
			if (tab[get_pos(x, y, info)] < 10)
				ft_putchar('0');
			ft_putnbr(tab[get_pos(x, y, info)]);
			if (++x != info->x_max)
				ft_putchar(' ');
		}
		write(1, "\n", 1);
		y++;
	}
}

t_sqr	min(t_sqr left, t_sqr up, t_sqr diag)
{
	t_sqr	min1;

	min1 = (left < up) ? left : up;
	min1 = (min1 < diag) ? min1 : diag;
	return (min1);
}
