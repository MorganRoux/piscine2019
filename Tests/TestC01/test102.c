/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test103.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 09:47:12 by mroux             #+#    #+#             */
/*   Updated: 2019/08/01 09:53:44 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int *a = NULL;
	int *b = NULL;
	int x;
	int y;

	x = 1;
	y = 2;
	a = &x;
	b = &y;
	printf("%d %d",x ,y);
	ft_swap(a, b);
	printf("%d %d",x ,y);
	return(0);
}