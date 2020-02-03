/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checkmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebart <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 14:38:56 by ebart             #+#    #+#             */
/*   Updated: 2019/08/21 22:59:02 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

int			check_char(char c)
{
	if ((c >= 32 && c <= 47) || (c >= 58 && c <= 126))
		return (1);
	else
		return (0);
}

t_error		check_info(t_map_info *info)
{
	if (info->obs == info->full
			|| info->obs == info->empty || info->full == info->empty
			|| info->y_max < 1)
		return (MAP_ERROR);
	if (check_char(info->obs) && check_char(info->full)
			&& check_char(info->empty))
		return (OK);
	return (MAP_ERROR);
}

t_error		read_info_sub(t_map_info *info)
{
	char	c;
	int		s;
	char	temp[3];

	c = '0';
	if ((s = read(info->fd, temp, 3)) <= 0)
		return (MAP_ERROR);
	info->obs = temp[0];
	info->full = temp[1];
	if (temp[2] != '\n')
		return (MAP_ERROR);
	return (check_info(info));
}

t_error		read_info(t_map_info *info)
{
	char	c;
	int		s;
	int		count;

	count = 0;
	if (info->filename != 0)
	{
		if ((info->fd = open(info->filename, O_RDONLY)) < 0)
			return (FILE_ERROR);
	}
	else
		info->fd = 0;
	if ((s = read(info->fd, &c, 1)) <= 0)
		return (MAP_ERROR);
	while (c >= '0' && c <= '9')
	{
		count = count * 10 + (c - 48);
		if ((s = read(info->fd, &c, 1)) <= 0)
			return (MAP_ERROR);
	}
	info->y_max = count;
	info->empty = c;
	return (read_info_sub(info));
}
