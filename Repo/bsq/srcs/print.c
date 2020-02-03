/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 23:14:55 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 22:06:01 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int			get_max_coords(t_map_info *info, int *max_coord)
{
	max_coord[0] = get_x(info->max[1], info) - (info->max[0] - 1);
	max_coord[1] = get_x(info->max[1], info);
	max_coord[2] = get_y(info->max[1], info) - (info->max[0] - 1);
	max_coord[3] = get_y(info->max[1], info);
	return (get_pos(max_coord[0], max_coord[2], info));
}

void		print_top(t_map_info *info, t_sqr *tab, int *pos, int max_pos)
{
	char	buf[BUF_LENGTH];
	int		i;

	i = 0;
	while (*pos < max_pos)
	{
		if (tab[*pos] == 0)
			buf[i++] = info->obs;
		else
			buf[i++] = info->empty;
		print_buf(&i, buf);
		if ((*pos + 1) % info->x_max == 0)
			buf[i++] = '\n';
		(*pos)++;
		print_buf(&i, buf);
	}
	if (i != 0)
	{
		write(1, buf, i);
		i = 0;
	}
}

void		print_center(t_map_info *info, t_sqr *tab, int *pos, int *max_coord)
{
	int x;
	int y;

	y = get_y(*pos, info);
	x = get_x(*pos, info);
	while (y <= max_coord[3])
	{
		while (x < info->x_max)
		{
			if (max_coord[0] <= x && x <= max_coord[1])
				write(1, &(info->full), 1);
			else
			{
				if (tab[*pos] == 0)
					write(1, &(info->obs), 1);
				else
					write(1, &(info->empty), 1);
			}
			x++;
			(*pos)++;
		}
		x = 0;
		write(1, "\n", 1);
		y++;
	}
}

void		print_bottom(t_map_info *info, t_sqr *tab, int *pos, int end)
{
	int		i;
	char	buf[BUF_LENGTH];

	while (*pos < end)
	{
		if (tab[*pos] == 0)
			buf[i++] = info->obs;
		else
			buf[i++] = info->empty;
		print_buf(&i, buf);
		if ((*pos + 1) % info->x_max == 0)
			buf[i++] = '\n';
		(*pos)++;
		print_buf(&i, buf);
	}
	if (i != 0)
	{
		write(1, buf, i);
		i = 0;
	}
}

void		print_result(t_map_info *info, t_sqr *tab)
{
	int	max_coord[4];
	int	max_pos;
	int	pos;
	int	end;

	end = info->x_max * info->y_max;
	max_pos = get_max_coords(info, max_coord);
	pos = 0;
	print_top(info, tab, &pos, max_pos);
	print_center(info, tab, &pos, max_coord);
	print_bottom(info, tab, &pos, end);
}
