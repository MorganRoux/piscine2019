/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 19:42:09 by exam              #+#    #+#             */
/*   Updated: 2019/08/09 19:49:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	long i;
	long n;
	long lend;
	long lstart;
	long signe = 1;
	int *tab;

	lstart = start;
	lend = end;

	n = lend - lstart;
	if (n< 0)
	{
		n = -n;
		signe = -1;
	}
	n++;
	if(!(tab = malloc(sizeof(int) * n)))
		return (0);
	i = 0;
	while (i < n)
	{
		tab[i] = lstart + i * signe;
		i++;
	}

	return tab;
}
