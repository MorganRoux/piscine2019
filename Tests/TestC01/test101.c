/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test102.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 09:34:02 by mroux             #+#    #+#             */
/*   Updated: 2019/08/01 09:44:40 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main(void)
{
	int *********n9 = NULL;
	int ********n8 = NULL;
	int *******n7 = NULL;
	int ******n6 = NULL;
	int *****n5 = NULL;
	int ****n4 = NULL;
	int ***n3 = NULL;
	int **n2 = NULL;
	int *n1 = NULL;
	int a;	

	a = 9;
	n1 = &a;
	n2 = &n1;
	n3 = &n2;
	n4 = &n3;
	n5 = &n4;
	n6 = &n5;
	n7 = &n6;
	n8 = &n7;
	n9 = &n8;
	ft_ultimate_ft(n9);
	printf("%d", a);
	return (0);
}
