/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test802.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 16:10:35 by mroux             #+#    #+#             */
/*   Updated: 2019/08/13 09:12:31 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	printf("abs (-7) = 7 : %d\n", ABS(-7));
	printf("abs 2 = 2 : %d\n", ABS(2));
	printf("abs (-7 + 2) = 5 : %d\n", ABS(-7 + 2));
}
