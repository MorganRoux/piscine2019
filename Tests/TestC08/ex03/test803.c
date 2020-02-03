/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test803.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:27:04 by mroux             #+#    #+#             */
/*   Updated: 2019/08/08 16:31:26 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point point;
	set_point(&point);

	printf("%d %d", point.x, point.y);	
	return (0);
}
   	
