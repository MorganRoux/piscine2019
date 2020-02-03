/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 17:17:16 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 22:06:16 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "ft.h"

void	print_error(t_error err)
{
	if (err == OK)
		ft_putstr("--OK--\n");
	if (err == NO_SOLUTION)
		write(2, "error\n", 6);
	if (err == COMPUTE_ERROR)
		write(2, "error\n", 6);
	if (err == MAP_ERROR)
		write(2, "map error\n", 10);
}

int		get_pos(int x, int y, t_map_info *info)
{
	return (x + info->x_max * y);
}

int		get_x(int pos, t_map_info *info)
{
	return (pos % info->x_max);
}

int		get_y(int pos, t_map_info *info)
{
	return (pos / info->x_max);
}

void	print_buf(int *i, char *buf)
{
	if (*i == BUF_LENGTH)
	{
		write(1, buf, BUF_LENGTH);
		*i = 0;
	}
}
