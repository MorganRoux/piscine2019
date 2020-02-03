/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 13:05:48 by mroux             #+#    #+#             */
/*   Updated: 2019/08/06 15:11:39 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_result(int *dame)
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(dame[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int		is_free(int *dame, int col, int row)
{
	int j;

	j = 0;
	while (j < row)
	{
		if (dame[j] == col
			|| dame[j] - (row - j) == col
			|| dame[j] + (row - j) == col)
			return (0);
		j++;
	}
	return (1);
}

void	find_next_queen(int *dame, int row, int *tot)
{
	int i;

	i = 0;
	if (row == 10)
	{
		*tot = *tot + 1;
		print_result(dame);
		return ;
	}
	while (i < 10)
	{
		if (is_free(dame, i, row))
		{
			dame[row] = i;
			find_next_queen(dame, row + 1, tot);
		}
		i++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	int dame[10];
	int tot;
	int i;

	tot = 0;
	i = 0;
	while (i < 10)
	{
		dame[i] = 0;
		i++;
	}
	find_next_queen(dame, 0, &tot);
	return (tot);
}
