/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:21:18 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 08:37:12 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	long	i;
	long	size;

	size = (long)max - (long)min;
	i = 0;
	if (size <= 0)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (i < size)
	{
		tab[i] = (int)(min + i);
		i++;
	}
	return (tab);
}
