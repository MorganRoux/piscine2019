/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test206.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 15:40:35 by mroux             #+#    #+#             */
/*   Updated: 2019/08/03 13:54:28 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char *s1 = "iAA";
	char s2[5] = "{wefg";
	char *s3 = "ohfibc";
	int a, b, c;

	s2[1] = 31;
	a = ft_str_is_printable(s1);
	b = ft_str_is_printable(s2);
	c = ft_str_is_printable(s3);

 	printf("101 - %d%d%d",a,b,c);

	return (0);
}
