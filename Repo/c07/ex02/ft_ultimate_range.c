/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:44:48 by mroux             #+#    #+#             */
/*   Updated: 2019/08/11 13:43:12 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	long i;
	long size;

	i = 0;
	size = (long)max - (long)min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(int) * size)))
		return (-1);
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
