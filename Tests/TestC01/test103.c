/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test103.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 10:17:34 by mroux             #+#    #+#             */
/*   Updated: 2019/08/01 10:22:38 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int d;
	int m;
	int a;
	int b;

	a = 9;
	b = 2;

	ft_div_mod(a, b, &d, &m);
	printf("%d / %d = %d mod %d", a, b, d, m);
	return(0);
	
}
