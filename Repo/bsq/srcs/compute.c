/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 19:46:05 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 23:37:37 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "ft.h"

t_error		check_valid(char buf, t_map_info *info, int pos)
{
	if (buf != info->empty && buf != info->obs && buf != '\n')
		return (MAP_ERROR);
	else if (buf == '\n')
	{
		if (!(info->new_line == 1 && get_x(pos, info) == 0))
			return (MAP_ERROR);
		info->new_line = 0;
		return (NEW_LINE);
	}
	else
	{
		if (info->new_line == 1 && get_x(pos, info) == 0)
			return (MAP_ERROR);
		info->new_line = 1;
	}
	return (OK);
}

t_error		fill_tab(t_sqr *tab, char buf, t_map_info *info, int pos)
{
	if (buf == info->obs)
		tab[pos] = 0;
	else
	{
		tab[pos] = min(tab_left(tab, pos, info),
						tab_up(tab, pos, info),
						tab_diag(tab, pos, info)) + 1;
		if ((tab[pos] > info->max[0])
		|| ((tab[pos] == info->max[0])
			&& (get_y(pos, info) < get_y(info->max[1], info)
			|| (get_y(pos, info) == get_y(info->max[1], info)
			&& get_x(pos, info) < get_x(info->max[1], info)))))
		{
			info->max[0] = tab[pos];
			info->max[1] = pos;
		}
	}
	return (OK);
}

t_error		init_compute(t_map_info *info, t_sqr **tab, int *pos)
{
	t_buf	*line1;

	*pos = 0;
	info->new_line = 0;
	if (read_first_line(info, &line1) != OK)
		return (MAP_ERROR);
	if (!(*tab = malloc(sizeof(int) * info->x_max * info->y_max)))
		return (ALLOC_ERROR);
	if (fill_first_line(tab, line1, pos, info) != OK)
		return (MAP_ERROR);
	info->new_line = 0;
	return (OK);
}

t_error		compute_solution(t_map_info *info, t_sqr **tab)
{
	int		r;
	int		bytes_read;
	int		pos;
	char	buf[BUF_LENGTH];
	int		i;

	if (init_compute(info, tab, &pos) != OK)
		return (MAP_ERROR);
	while ((bytes_read = read(info->fd, buf, BUF_LENGTH)) > 0)
	{
		i = 0;
		while (i < bytes_read)
		{
			r = check_valid(buf[i++], info, pos);
			if (r == OK)
				fill_tab(*tab, buf[i - 1], info, pos);
			else if (r == MAP_ERROR)
				return (MAP_ERROR);
			else if (r == NEW_LINE)
				continue ;
			pos++;
		}
	}
	return ((r == -1 || r == MAP_ERROR ||
				get_y(pos, info) != info->y_max) ? MAP_ERROR : OK);
}
