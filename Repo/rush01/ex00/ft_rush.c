/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebourdit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:07:46 by ebourdit          #+#    #+#             */
/*   Updated: 2019/08/11 19:25:24 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		view_up(int *tab, int pos);
int		view_down(int *tab, int pos);
int		view_left(int *tab, int pos);
int		view_right(int *tab, int pos);
int		check_double(int *tab, int pos);

int		is_valid(int pos, int *tab, int *rules)
{
	if (check_double(tab, pos))
		return (0);
	if (view_up(tab, pos) > rules[pos % 4])
		return (0);
	if (view_left(tab, pos) > rules[pos / 4 + 8])
		return (0);
	if ((pos % 4 == 3)
	&& ((view_left(tab, pos) != rules[pos / 4 + 8])
		|| (view_right(tab, pos) != rules[pos / 4 + 12])))
		return (0);
	if ((pos / 4 == 3)
	&& ((view_up(tab, pos) != rules[pos % 4])
		|| (view_down(tab, pos) != rules[pos % 4 + 4])))
		return (0);
	return (1);
}

int		ft_rush(int pos, int *tab, int *rules)
{
	int h;
	int fin;
	int test;

	if (pos == 16)
		return (1);
	h = 1;
	while (h < 5)
	{
		tab[pos] = h;
		test = is_valid(pos, tab, rules);
		if (test == 0)
			h++;
		else
		{
			fin = ft_rush(pos + 1, tab, rules);
			if (fin == 0)
				h++;
			else
				return (1);
		}
	}
	tab[pos] = 0;
	return (0);
}
