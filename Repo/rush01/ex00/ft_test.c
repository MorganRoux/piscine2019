/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 15:06:55 by mroux             #+#    #+#             */
/*   Updated: 2019/08/11 19:16:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_double(int *tab, int pos)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
			if ((tab[4 * (pos / 4) + i] == tab[4 * (pos / 4) + j++])
			&& (tab[4 * (pos / 4) + i] != 0))
				return (1);
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = i + 1;
		while (j < 4)
			if ((tab[(pos % 4) + 4 * i] == tab[(pos % 4) + 4 * j++])
			&& (tab[(pos % 4) + 4 * i] != 0))
				return (1);
		i++;
	}
	return (0);
}

int		view_up(int *tab, int pos)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (tab[pos % 4 + (i * 4)] > max)
		{
			max = tab[pos % 4 + (i * 4)];
			count++;
		}
		i++;
	}
	return (count);
}

int		view_down(int *tab, int pos)
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (tab[pos % 4 + (i * 4)] > max)
		{
			max = tab[pos % 4 + (i * 4)];
			count++;
		}
		i--;
	}
	return (count);
}

int		view_left(int *tab, int pos)
{
	int i;
	int max;
	int count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (tab[4 * (pos / 4) + i] > max)
		{
			max = tab[4 * (pos / 4) + i];
			count++;
		}
		i++;
	}
	return (count);
}

int		view_right(int *tab, int pos)
{
	int i;
	int max;
	int count;

	i = 3;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (tab[4 * (pos / 4) + i] > max)
		{
			max = tab[4 * (pos / 4) + i];
			count++;
		}
		i--;
	}
	return (count);
}
