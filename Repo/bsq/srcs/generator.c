/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:57:31 by mroux             #+#    #+#             */
/*   Updated: 2019/08/19 18:16:25 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <math.h>
#include <stdlib.h>

t_map	*generate_random_map(int x, int y, int density)
{
	t_map	*map;
	int		i;
	int		j;
	double	r;

	i = 0;
	j = 0;
	if (!(map = (t_map *)malloc(sizeof(t_map) * x * y)))
		return (0);
	while (i < x)
	{
		j = 0;
		while (j < y)
		{
			r = rand() % 100;
			map[i * y + j] = ((r < density) ? MAP_OBS : MAP_EMPTY);
			j++;
		}
		i++;
	}
	return (map);
}
