/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 22:11:18 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 22:56:23 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "ft.h"

t_error		read_first_line(t_map_info *info, t_buf **start)
{
	t_buf	*buf;
	t_buf	*new;
	int		r;
	int		i;

	i = 0;
	if (!(buf = (t_buf *)malloc(sizeof(t_buf))))
		return (ALLOC_ERROR);
	*start = buf;
	while ((r = read(info->fd, &buf->data, 1)) > 0)
	{
		if (buf->data == '\n')
			break ;
		if (!(new = (t_buf *)malloc(sizeof(t_buf))))
			return (ALLOC_ERROR);
		buf->next = new;
		buf = new;
		i++;
	}
	if (r <= 0 || i == 0)
		return (MAP_ERROR);
	info->x_max = i;
	return (OK);
}

t_error		fill_first_line(t_sqr **tab, t_buf *line1, int *pos,
		t_map_info *info)
{
	t_buf	*buf;
	int		r;

	buf = line1;
	while (*pos < info->x_max)
	{
		r = check_valid(buf->data, info, *pos);
		if (r == OK)
			fill_tab(*tab, buf->data, info, *pos);
		else if (r == MAP_ERROR)
			return (MAP_ERROR);
		else if (r == NEW_LINE)
			continue ;
		(*pos)++;
		buf = buf->next;
	}
	return (OK);
}
