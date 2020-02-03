/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:19:21 by mroux             #+#    #+#             */
/*   Updated: 2019/08/21 16:30:16 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "bsq.h"

t_error		go_to_map(t_map_info *info)
{
	char	buf;

	buf = 0;
	if ((info->fd = open(info->filename, O_RDONLY)) <= 0)
		return (-1);
	while (buf != '\n')
	{
		if (read(info->fd, &buf, 1) == -1)
			return (FILE_ERROR);
	}
	return (OK);
}
